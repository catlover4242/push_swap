/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:59:13 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:13 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_mq *mq;
	int		error;
	t_pile *pile_a;
	t_pile	*pile_b;

	if (argc == 1)
		exit(1);
	mq = malloc(sizeof(t_mq));
	if (!mq)
		return (1);
	error = 0;
	
}
