/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rsorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 00:59:41 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/28 01:00:22 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	stack_rsorted(t_stack *stack)
{
	if (!stack)
		return (FALSE);
	while (stack)
	{
		if (stack->next && stack->next->nb > stack->nb)
			return (FALSE);
		stack = stack->next;
	}
	return (TRUE);
}
