/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:54 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 12:39:54 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_pile
{
	int				value;
	struct s_pile	*prev;
	struct s_pile	*next;
}					t_pile;

typedef struct s_mq
{
	int	med;
	int q1;
	int	q2;
	int len;
}		t_mq;

// src
size_t	ft_strlen(const char *s);
void	quick_sort(int *array, int low, int high);
long long	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);
int	ft_atoi_and_check(const char *nptr, int *error);

// utils
void	free_pile(t_pile **pile);
void	free_all(t_pile **pile_a, t_pile **pile_b, t_pile **mq);
int	new_element(int nbr, t_pile **element);
int	len(t_pile *pile);

// push
void	push_b(t_pile **pilea, t_pile **pileb, t_mq **mq);
void	push_b(t_pile **pilea, t_pile **pileb, t_mq **mq);

// swap
void	swap_a(t_pile **pilea);
void	swap_b(t_pile **pileb);

// rotate
void	rotate_a(t_pile **pile_a, int print);
void	rotate_b(t_pile **pile_b, int print);
void	rotate_all(t_pile **pilea, t_pile **pileb);

// reverse_rotate
void	reverse_rotate_a(t_pile **pile_a, int print);
void	reverse_rotate_b(t_pile **pile_b, int print);
void	inverse_rotate_all(t_pile **pilea, t_pile **pileb);

// get things
int	get_index(t_pile *pile, int elem);
int get_min(t_pile *pile);
int get_max(t_pile *pile);
int	get_pos_to_place(t_pile *pile, int elem);
int	get_best_move(t_pile *pile_a, t_pile *pile_b);

// algo
void	sort_three(t_pile **pile_a);
int	is_sorted(t_pile *pile);
int	inner(t_pile *pile, int q1, int q2);

#endif
