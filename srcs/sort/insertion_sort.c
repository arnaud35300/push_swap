/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 01:05:34 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 08:12:47 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	choose_hold_first(t_stack **a, t_sort *s)
{
	return (!s->hold_second
		|| nb_act_top(*a, s->hold_first) < nb_act_top(*a, s->hold_second)
		|| (nb_act_top(*a, s->hold_first) == nb_act_top(*a, s->hold_second)
			&& s->hold_first->nb < s->hold_second->nb));
}

int	insertion_sort(t_stack **a, t_stack **b, int nb_chunks)
{
	t_sort	*s;	

	s = init_sort_struct(nb_chunks, *a);
	if (!s || s->len < 2)
		return (free_sort_struct(&s, FALSE));
	while (*a)
	{
		while (!chunk_in_a(*a, s))
		{
			s->hold_first = find_hold_first(*a, *b, s);
			s->hold_second = find_hold_second(*a, *b, s);
			if (choose_hold_first(a, s))
				top_and_pstack_b(a, b, s->hold_first);
			else
				top_and_pstack_b(a, b, s->hold_second);
		}
		s->chunk_id++;
	}
	while (*b)
		top_and_pstack_a(a, b, greatest_elem(*b));
	return (free_sort_struct(&s, TRUE));
}
