/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_instructions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:25:50 by pleblond          #+#    #+#             */
/*   Updated: 2024/12/04 21:25:50 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_index(t_pile *pile, int elem)
{
	t_pile *temp;
	int		i;

	i = 0;
	temp = pile;
	while (temp->next != pile)
	{
		if (temp->value == elem)
			return (i);
			temp = temp->next;
			i++;
	}
	return (i);
}

int get_min(t_pile *pile)
{
	int	min;
	t_pile	*temp;

	temp = pile->next;
	min = pile->value;
	while(temp != pile && temp != NULL)
	{
		if (temp->value < min)
			min = temp->value;
		temp = temp->next;
	}
	return (min);
}

int get_max(t_pile *pile)
{
	int	max;
	t_pile	*temp;

	temp = pile->next;
	max = pile->value;
	while(temp != pile && temp != NULL)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}