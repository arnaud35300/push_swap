/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_and_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:59:58 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/24 03:16:41 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	exit_and_free(char *msg, int status)
{
	ft_putstr_fd(msg, status);
	ft_putchar_fd('\n', status);
	return (status);
}
