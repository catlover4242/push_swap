/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 02:17:55 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/27 02:17:55 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_pile **pile_a)
{
	int		first;
	int		second;
	int		third;

	first = (*pile_a)->value;
	second = (*pile_a)->next->value;
	third = (*pile_a)->prev->value;
	if ((first < second) && (second > third) && (first < third))
	{
		reverse_rotate_a(pile_a, 1);
		swap_a(pile_a);
	}
	else if ((first < second) && (second > third) && (first > third))
		reverse_rotate_a(pile_a, 1);
	else if ((first > second) && (second < third) && (first > third))
		rotate_a(pile_a, 1);
	else if ((first > second) && (second > third))
	{
		swap_a(pile_a);
		reverse_rotate_a(pile_a, 1);
	}
	else
		swap_a(pile_a);
}
