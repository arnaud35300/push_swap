/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 04:40:38 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:15:46 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **a, t_stack**b, t_bool display)
{
	rra(a, FALSE);
	rrb(b, FALSE);
	if (display)
		ft_putstr_fd("rrr\n", 1);
}
