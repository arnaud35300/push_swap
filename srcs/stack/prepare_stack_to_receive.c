/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_stack_to_receive.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:35:02 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:52:12 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepare_stack_to_receive(t_stack **stack, t_stack *elem)
{
	t_stack	*min;
	int		reverse;

	return ;
	if (is_greatest(*stack, elem) || is_smallest(*stack, elem))
		min = smallest_elem(*stack);
	else
		min = elem_before_elem(*stack, elem);
	reverse = FALSE;
	if (*stack == min)
		return ;
	if (get_elem_position(*stack, elem) > (ft_lstsize(*stack) / 2))
		reverse = TRUE;
	while (*stack != min)
		rx_or_rrx(NULL, stack, reverse);
}
