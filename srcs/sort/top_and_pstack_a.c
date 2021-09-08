/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_and_pstack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:45:56 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:41:25 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	top_and_pstack_a(t_stack **a, t_stack **b, t_stack *elem)
{
	int		len;
	int		i;
	t_bool	reverse;

	len = ft_lstsize(*b);
	i = get_elem_position(*b, elem);
	reverse = FALSE;
	if (i > (len / 2))
		reverse = TRUE;
	while (*b != elem)
		rx_or_rrx(NULL, b, reverse);
	pa(a, b, TRUE);
}
