/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 00:47:19 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/28 00:52:36 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	stack_sorted(t_stack *stack)
{
	if (!stack)
		return (FALSE);
	while (stack)
	{
		if (stack->next && stack->next->nb < stack->nb)
			return (FALSE);
		stack = stack->next;
	}
	return (TRUE);
}
