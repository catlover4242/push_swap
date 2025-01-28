/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 23:56:43 by pleblond          #+#    #+#             */
/*   Updated: 2024/11/18 23:56:43 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


// Fonction pour liberer une pile circulaire
void free_pile(t_pile **pile)
{
	t_pile *current;
	t_pile *temporaire;

	if ((*pile) == NULL)
		return ;
	current = (*pile);
	while (current->next != (*pile))
	{
		temporaire = current;
		current = current->next;
		free(temporaire);
	}
	free(current);
	*pile = NULL;
}

// Fonction qui free les 2 piles.
void free_all(t_pile **pile_a, t_pile **pile_b, t_mq **mq)
{
	free_pile(pile_a);
	free_pile(pile_b);
	free(*mq);
}

// Fonction qui initialise un nombre a la pile.
int	new_element(int nbr, t_pile **element)
{
	(*element) = malloc(sizeof(t_pile));
	if (!(*element))
		return (-1);
	(*element)->value = nbr;
	(*element)->prev = NULL;
	(*element)->next = NULL;
	return (1);
}

// Fonction qui ajoute un nbr a la liste
int addlist(t_pile **pile, int nbr)
{
	t_pile *element;

	if (new_element(nbr, &element) == -1)
		return (-1);
	if ((*pile) == NULL)
	{
		(*pile) = element;
		(*pile)->prev = *pile;
		(*pile)->next = *pile;
	}
	else
	{
		element->prev = (*pile)->next;
		element->next = (*pile);
		(*pile)->prev->next = element;
		(*pile) = element;
	}
	return (1);
}

int	len(t_pile *pile)
{
	t_pile *temp;
	int		i;

	if ((pile) && pile->next != pile)
	{
		temp = (pile)->next;
		i = 1;
		while (temp != (pile))
		{
			i++;
			temp = temp->next;
		}
		return (i);
	}
	return (0);
}