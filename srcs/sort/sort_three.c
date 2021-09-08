/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:20:42 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:59:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** 6|3|1| | | | |
** 4|2|6|8|4|2|1|
** -------------
** 0 0 0 0 0 0 0
**         1 0 0 -> the greatest first
**		   0 0 1 -> the smallest first
** 	 	   0 1 0 -> the middle first
** 0 0 0 0 0 0 0
** 0 1 0 0 0 0 0 -> the greatest second
** 0 0 0 1 0 0 0 -> the smallest second
** 0 0 1 0 0 0 0 -> the middle second
*/

static int	three_stack_order(t_stack *a, int order)
{
	if (greatest_elem(a) == a)
		order = order | 4;
	else if (smallest_elem(a) == a)
		order = order | 1;
	else
		order = order | 2;
	if (greatest_elem(a) == a->next)
		order = order | 32;
	else if (smallest_elem(a) == a->next)
		order = order | 8;
	else
		order = order | 16;
	return (order);
}

void	sort_three(t_stack **a)
{
	int	order;

	order = three_stack_order(*a, 0);
	if ((order & (2 | 8)) == (2 | 8))
		sa(a, TRUE);
	if ((order & (2 | 32)) == (2 | 32))
		rra(a, TRUE);
	if ((order & (4 | 16)) == (4 | 16))
	{
		sa(a, TRUE);
		rra(a, TRUE);
	}
	if ((order & (4 | 8)) == (4 | 8))
		ra(a, TRUE);
	if ((order & (1 | 32)) == (1 | 32))
	{
		sa(a, TRUE);
		ra(a, TRUE);
	}
}
