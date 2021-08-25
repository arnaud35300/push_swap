/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:07:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/25 21:06:01 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_ps	*ps;

	ps = malloc(sizeof(t_ps));
	ps->a = NULL;
	ps->b = NULL;
	if (!ps)
		return (MAIN_ERROR);
	if (!(parse_args(&ps, ac, av)))
		return (exit_and_free(ps, "Error.", MAIN_ERROR));
	return (exit_and_free(ps, NO_MSG, MAIN_SUCCES));
}
