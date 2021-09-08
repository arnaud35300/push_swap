/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_and_pstack_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:44:32 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:42:07 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	top_and_pstack_b(t_stack **a, t_stack **b, t_stack *elem)
{
	int		len;
	int		i;
	t_bool	reverse;

	len = ft_lstsize(*a);
	i = get_elem_position(*a, elem);
	reverse = FALSE;
	if (i > (len / 2))
		reverse = TRUE;
	while (*a != elem)
		rx_or_rrx(a, NULL, reverse);
	prepare_stack_to_receive(b, elem);
	pb(a, b, TRUE);
}
