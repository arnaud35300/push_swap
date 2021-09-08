/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 04:48:04 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/07 03:19:00 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_sort	*init_sort_struct(int nb_chunks, t_stack *a)
{
	t_sort	*s;
	int		*arr;

	s = malloc(sizeof(t_sort));
	arr = sort_array(a);
	if (!s || !arr)
		return (s);
	s->len = ft_lstsize(a);
	s->chunks = create_chunks(arr, s->len, nb_chunks);
	free(arr);
	if (!s->chunks)
		return (NULL);
	s->chunk_id = 0;
	s->nb_chunks = nb_chunks;
	s->chunk_len = s->len / s->nb_chunks;
	s->lst_chunk_len = (s->len / s->nb_chunks) + (s->len % s->nb_chunks);
	s->hold_first = NULL;
	s->hold_second = NULL;
	return (s);
}
