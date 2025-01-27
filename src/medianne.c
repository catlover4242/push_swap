/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medianne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 02:10:31 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/27 02:10:31 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void fill_mq(t_mq **mq, int len, int array[])
{
    // Calcul de la médiane
    if (len % 2 == 0)
        (*mq)->med = len / 2;

    // Calcul du premier quartile (q1)
    (*mq)->q1 = (((*mq)->med) + 1) / 2;
    if ((*mq)->med % 2 == 0)
        (*mq)->q1 = ((*mq)->med) / 2;

    // Calcul du troisième quartile (q2)
    (*mq)->q2 = ((*mq)->med) + ((*mq)->q1);

    // Assignation des valeurs de q1 et q2
    if (len > 5)
    {
        (*mq)->q1 = array[(*mq)->q1];
        (*mq)->q2 = array[(*mq)->q2];
    }
    else
    {
        (*mq)->q1 = 0;
        (*mq)->q2 = 0;
    }
}

/*
 * fill_mq - Calcule la médiane (med), le premier quartile (q1) et le troisième quartile (q2)
 * d'un tableau `array[]` de longueur `len` et stocke les résultats dans la structure `t_mq`.
 *
 * Si la longueur `len` est paire :
 *   - La médiane est l'indice du milieu (len / 2).
 *   - q1 est l'indice du premier quartile (milieu de la première moitié).
 *   - q2 est l'indice du troisième quartile (milieu de la deuxième moitié).
 *
 * Si `len` est inférieur ou égal à 5, q1 et q2 sont mis à 0 (non pertinents pour les petits tableaux).
 * Sinon, q1 et q2 prennent les valeurs du tableau aux indices calculés.
 */