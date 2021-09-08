/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 03:13:52 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:17:03 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **a, t_stack **b, t_bool display)
{
	sa(a, FALSE);
	sb(b, FALSE);
	if (display)
		ft_putstr_fd("ss\n", 1);
}
