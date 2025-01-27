/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:52:55 by pleblond          #+#    #+#             */
/*   Updated: 2024/12/04 21:52:55 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while(s[i])
		++i;
	return (i);
}

// #include <stdio.h>
//
// int main()
// {
//	 printf("%lld", ft_strlen("test test\n"));
// }