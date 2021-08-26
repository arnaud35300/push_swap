/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 04:15:41 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 04:36:39 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack *before_last;

	if (ft_lstsize(*a) < 2)
		return;
	before_last = *a;
	while (before_last->next->next)
	{
		before_last = before_last->next;
	}
	before_last->next->next = *a;
	*a = before_last->next;
	before_last->next = NULL;
}
