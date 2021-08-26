/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:15:15 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 00:39:59 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	parse_args(t_ps	*ps, int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
		return (FALSE);
	while (++i < ac)
		if(!(parse_arg(ps, av[i])))
			return (FALSE);
	return (TRUE);
}
