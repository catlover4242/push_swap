/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:04:27 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 15:04:27 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void push_a(t_pile **pilea, t_pile **pileb, t_mq **mq)
{
	t_pile	*tmp;

	if (addlist(pilea, (*pileb)->value) == -1)
	{
		free_all(pilea, pileb, mq);
		exit(1);
	}
	tmp = (*pileb);
	(*pileb)->prev->next = (*pileb)->next;
	(*pileb)->next->prev = (*pileb)->prev;
	(*pileb) = (*pileb)->prev;
	free(tmp);
	write(1, "pa\n", 3);
}

void push_b(t_pile **pilea, t_pile **pileb, t_mq **mq)
{
	t_pile	*tmp;

	if (addlist(pileb, (*pilea)->value) == -1)
	{
		free_all(pilea, pileb, mq);
		exit(1);
	}
	tmp = (*pilea);
	(*pilea)->prev->next = (*pilea)->next;
	(*pilea)->next->prev = (*pilea)->prev;
	(*pilea) = (*pilea)->prev;
	free(tmp);
	write(1, "pb\n", 3);
}