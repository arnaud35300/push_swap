/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 04:12:41 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:14:22 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **a, t_stack **b, t_bool display)
{
	ra(a, FALSE);
	rb(b, FALSE);
	if (display)
		ft_putstr_fd("rr\n", 1);
}
