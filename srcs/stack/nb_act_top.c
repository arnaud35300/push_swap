/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_act_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:28:25 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:28:37 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_act_top(t_stack *stack, t_stack *elem)
{
	int	len;
	int	i;

	len = ft_lstsize(stack);
	i = get_elem_position(stack, elem);
	if (i > (len / 2))
		i = len - i;
	return (i);
}
