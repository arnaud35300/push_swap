/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:07:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 05:19:09 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_ps	*ps;
	int		len;

	ps = malloc(sizeof(t_ps));
	ps->a = NULL;
	ps->b = NULL;
	if (!ps)
		return (MAIN_ERROR);
	if (ac == 1)
		return (MAIN_SUCCESS);
	if (!(parse_args(ps, ac, av)))
		return (exit_and_free(ps, "Error.", MAIN_ERROR));
	len = ft_lstsize(ps->a);
	if (stack_sorted(ps->a))
		return (exit_and_free(ps, NO_MSG, MAIN_SUCCESS));
	if (len == 3)
		sort_three(&(ps->a));
	else if (len == 5)
		sort_five(&(ps->a), &(ps->b));
	else if (len < 200)
		insertion_sort(&(ps->a), &(ps->b), 5);
	else
		insertion_sort(&(ps->a), &(ps->b), 11);
	return (exit_and_free(ps, NO_MSG, MAIN_SUCCESS));
}
