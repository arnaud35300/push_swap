/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:07:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 03:53:24 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print(int n)
{
	printf("|\t\t%d\t\t|\n", n);
	return (1);
}

void display_pile(t_ps *ps)
{
	printf("PILE A\n\n");	
	ft_lstiter(ps->a, &print);
	printf("\t\tnull\t\t\n- - - - - - - -\n");
	printf("PILE B\n\n");
	ft_lstiter(ps->b, &print);
	printf("\t\tnull\t\t\n- - - - - - - -\n");
}


int	main(int ac, char **av)
{
	t_ps	*ps;

	ps = malloc(sizeof(t_ps));
	ps->a = NULL;
	ps->b = NULL;
	if (!ps)
		return (MAIN_ERROR);
	if (!(parse_args(ps, ac, av)))
		return (exit_and_free(ps, "Error.", MAIN_ERROR));
	display_pile(ps);
	pb(&(ps->a), &(ps->b));
	pb(&(ps->a), &(ps->b));
	display_pile(ps);
	pa(&(ps->a), &(ps->b));
	pa(&(ps->a), &(ps->b));
	display_pile(ps);
	return (exit_and_free(ps, NO_MSG, MAIN_SUCCES));
}
