/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_in_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:25:10 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:25:55 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	nb_in_stack(t_stack	*stack, int	nb)
{
	while (stack)
	{
		if (stack->nb == nb)
			return (TRUE);
		stack = stack->next;
	}
	return (FALSE);
}
