/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:10:39 by pleblond          #+#    #+#             */
/*   Updated: 2024/12/05 22:10:39 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	part(int *array, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = array[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
		j++;
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void	quick_sort(int *array, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = part(array, low, high);
		quick_sort(array, low, pivot - 1);
		quick_sort(array, pivot + 1, high);
	}
}

static void	doublon_and_fin(int array[], int len, t_mq **mq)
{
	int	i;
	int	tmp;
	int	length;

	i = 0;
	tmp = array[0];
	length = 1;
	while (++i < len)
	{
		if (array[i] == tmp)
			length = 0;
		tmp = array[i];
	}
	(*mq)->len = len;
	if (!length)
		(*mq)->len = 1;
	(*mq)->med = (len + 1) / 2;
	fill_mq(mq, len, array);
}

void	get_median_quartil(char **spl, t_mq **mq, int *error)
{
	int	len;
	int	i;
	int	*tab;

	len = 0;
	while (spl[len] && spl != NULL)
		++len;
	tab = malloc(sizeof(int) * len);
	if (!tab || !spl)
	{
		(*mq) = NULL;
		return ;
	}
	i = len;
	while (--i != -1)
	{
		tab[i] = ft_atoi_and_check(spl[i], error);
		free(spl[i]);
	}
	free(spl);
	quick_sort(tab, 0, len - 1);
	doublon_and_fin(tab, len, mq);
	(*mq)->med = tab[((*mq)->med) - 1];
	free(tab);
}