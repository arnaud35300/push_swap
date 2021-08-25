/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:20:57 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/24 03:31:15 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	parse_arg(t_ps **ps, char *str)
{
	if (!str)
		return (FALSE);
	int e = ft_atoi("9999999999999999999999999");
	printf("%d %d", e, e >= INT_MAX);
	(void)ps;
	(void)e;
	return (TRUE);
}
