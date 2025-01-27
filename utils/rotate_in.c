/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:10:18 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 14:10:18 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_pile **pile_a, int print)
{
	if (*pile_a && (*pile_a)->next != *pile_a)
	{
		*pile_a = (*pile_a)->next;
		if (print)
			write(1, "ra\n", 3);
	}
}

void	rotate_b(t_pile **pile_b, int print)
{
	if (*pile_b && (*pile_b)->next != *pile_b)
	{
		*pile_b = (*pile_b)->next;
		if (print)
			write(1, "rb\n", 3);
	}
}

void	rotate_all(t_pile **pilea, t_pile **pileb)
{
	if (*pilea && (*pilea)->next != *pilea && *pileb && (*pileb)->next != pileb)
	{
		rotate_a(pilea, 0);
		rotate_b(pileb, 0);
		write(1, "rr\n", 3);
	}
}
