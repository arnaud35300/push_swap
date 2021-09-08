/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem_after_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 05:06:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:51:21 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*elem_after_elem(t_stack *stack, t_stack *elem)
{
	t_stack	*max;

	max = greatest_elem(stack);
	while (stack)
	{
		if (stack->nb > elem->nb
			&& (max->nb - elem->nb) > (stack->nb - elem->nb))
			max = stack;
		stack = stack->next;
	}
	return (max);
}
