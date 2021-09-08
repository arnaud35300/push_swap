/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:27:55 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:28:14 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_elem_position(t_stack *stack, t_stack *elem)
{
	int	i;

	i = 0;
	while (stack && stack != elem)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
