/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_greatest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:29:15 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:29:28 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_greatest(t_stack *stack, t_stack *elem)
{
	while (stack)
	{
		if (stack->nb > elem->nb)
			return (FALSE);
		stack = stack->next;
	}
	return (TRUE);
}
