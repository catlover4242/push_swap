/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:04:34 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 15:04:34 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void swap_a(t_pile **pilea)
{
	int	temp;

	temp = (*pilea)->value;
	(*pilea)->value = (*pilea)->next->value;
	(*pilea)->next->value = temp;
	write(1, "sa\n", 3);
}

void swap_b(t_pile **pileb)
{
	int	temp;

	temp = (*pileb)->value;
	(*pileb)->value = (*pileb)->next->value;
	(*pileb)->next->value = temp;
	write(1, "sb\n", 3);
}