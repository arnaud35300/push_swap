/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:15:44 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:54:17 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, t_bool display)
{
	t_stack	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = (*a);
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (display)
		ft_putstr_fd("sa\n", 1);
}
