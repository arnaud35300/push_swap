/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_in_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:19:11 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:19:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	chunk_in_a(t_stack *a, t_sort *s)
{
	int	i;
	int	len;

	len = s->chunk_len;
	if (s->nb_chunks - 1 == s->chunk_id)
		len = s->lst_chunk_len;
	while (a)
	{
		i = -1;
		while (++i < len)
			if (a->nb == s->chunks[s->chunk_id][i])
				return (FALSE);
		a = a->next;
	}
	return (TRUE);
}
