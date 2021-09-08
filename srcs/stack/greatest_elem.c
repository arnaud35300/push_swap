/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greatest_elem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:30:23 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:30:38 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*greatest_elem(t_stack *stack)
{
	t_stack	*elem;

	elem = stack;
	while (stack)
	{
		if (stack->nb > elem->nb)
			elem = stack;
		stack = stack->next;
	}
	return (elem);
}
