/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 03:57:09 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 04:27:24 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack *tmp;

	if(ft_lstsize(*a) < 2)
		return;
	tmp = (*a);
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
}
