/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem_before_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:33:38 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:34:45 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*elem_before_elem(t_stack *stack, t_stack *elem)
{
	t_stack	*min;

	min = greatest_elem(stack);
	while (stack)
	{
		if (stack->nb > elem->nb && stack->nb > min->nb)
			min = stack;
		stack = stack->next;
	}
	return (min);
}
