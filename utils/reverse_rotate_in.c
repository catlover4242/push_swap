/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_in.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:55:18 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 14:55:18 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_pile **pile_a, int print)
{
	if (*pile_a && (*pile_a)->prev != *pile_a)
	{
		*pile_a = (*pile_a)->prev;
		if (print)
			write(1, "rra\n", 4);
	}
}

void	reverse_rotate_b(t_pile **pile_b, int print)
{
	if (*pile_b && (*pile_b)->prev != *pile_b)
	{
		*pile_b = (*pile_b)->prev;
		if (print)
			write(1, "rrb\n", 4);
	}
}

void	inverse_rotate_all(t_pile **pilea, t_pile **pileb)
{
	if (*pilea && (*pilea)->prev != *pilea && *pileb && (*pileb)->prev != pileb)
	{
		reverse_rotate_a(pilea, 0);
		reverse_rotate_b(pileb, 0);
		write(1, "rrr\n", 4);
	}
}
