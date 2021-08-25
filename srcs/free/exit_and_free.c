/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:59:58 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/25 21:12:24 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	exit_and_free(t_ps *ps, char *msg, int status)
{
	free_stack(ps->a);
	free_stack(ps->b);
	free(ps);
	if (msg)
	{
		ft_putstr_fd(msg, status);
		ft_putchar_fd('\n', status);
	}
	return (status);
}
