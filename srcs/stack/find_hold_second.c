/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_hold_second.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:27:05 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:27:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_hold_second(t_stack *a, t_stack *b, t_sort *s)
{
	t_stack	*elem;
	int		i;
	int		len;

	elem = NULL;
	i = -1;
	len = s->chunk_len;
	if (s->nb_chunks - 1 == s->chunk_id)
		len = s->lst_chunk_len;
	while (a)
	{
		i = -1;
		while (++i < len)
			if (a->nb == s->chunks[s->chunk_id][i]
				&& !nb_in_stack(b, a->nb) && a != s->hold_first)
				elem = a;
		a = a->next;
	}
	return (elem);
}
