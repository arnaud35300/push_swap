/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:15:44 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 03:09:18 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack *tmp1;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp1 = (*a);
	(*a) = (*a)->next;
	tmp1->next = (*a)->next; 
	(*a)->next = tmp1;
}
