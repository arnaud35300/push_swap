/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx_or_rrx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:28:31 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:48:45 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rx_or_rrx(t_stack **a, t_stack **b, t_bool reverse)
{
	if (a)
	{
		if (reverse)
			rra(a, TRUE);
		else
			ra(a, TRUE);
	}
	if (b)
	{
		if (reverse)
			rrb(b, TRUE);
		else
			rb(b, TRUE);
	}
}
