/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:07:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/25 05:23:19 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_ps	*ps;

	char *endPtr;
	int err = 0;
	int value = ft_strtol(av[ac -1], &endPtr, 10, &err);
	printf("value: %d\nstring: |%s|\nendPtr: |%s|\n", value, av[ac -1], endPtr);
	printf("%d err\n", err);
	return (0);
	ps = malloc(sizeof(t_ps));
	if (!ps)
		return (1);
	if (!(parse_args(&ps, ac, av)))
		return (exit_and_free("Error.", 1));
}
