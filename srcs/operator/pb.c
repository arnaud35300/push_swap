/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 03:29:47 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 03:51:49 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if (!ft_lstsize(*a))
		return;
	tmp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, tmp);
}
