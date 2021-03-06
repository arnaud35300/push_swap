/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 04:36:50 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:15:19 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **b, t_bool display)
{
	rra(b, FALSE);
	if (display)
		ft_putstr_fd("rrb\n", 1);
}
