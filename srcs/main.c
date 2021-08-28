/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 02:07:45 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/28 03:15:14 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print(int n)
{
	printf("%21d\n", n);
	return (1);
}

void display_pile(t_ps *ps)
{
	static int	i = 0;
	printf("************************************\n|||||||||||||||||||||\033[0;31m %d \033[0m||||||||||||\n************************************\n", i++);
	printf("---------------      ---------------\n%*s\n---------------      ---------------\n", (int)(15 + ft_strlen("PILE A")), "PILE A");	
	ft_lstiter(ps->a, &print);
	printf("%*s\n", (int)(21 + ft_strlen("null")), "null");
	printf("---------------      ---------------\n%*s\n---------------      ---------------\n", (int)(15 + ft_strlen("PILE B")), "PILE B");	
	ft_lstiter(ps->b, &print);
	printf("%*s\n", (int)(21 + ft_strlen("null")), "null");
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
/*	// 1
	display_pile(ps);
	// 2
	sa(&(ps->a));
	display_pile(ps);
	// 3
	pb(&(ps->a), &(ps->b));
	pb(&(ps->a), &(ps->b));
	pb(&(ps->a), &(ps->b));
	display_pile(ps);
	// 4
	rr(&(ps->a), &(ps->b));
	display_pile(ps);
	// 5
	rrr(&(ps->a), &(ps->b));
	display_pile(ps);
	// 6
	sa(&(ps->a));
	display_pile(ps);
	// 7
	pa(&(ps->a), &(ps->b));
	pa(&(ps->a), &(ps->b));
	pa(&(ps->a), &(ps->b));
	display_pile(ps);
*/
	insertion_sort(&(ps->a), &(ps->b));	
	while (!stack_sorted(ps->a) ||  ps->b != NULL)
	{	char buf[50];
		scanf("%[^\n]", buf);
		fgetc(stdin);
		if (ft_strncmp(buf, "ra", ft_strlen(buf)) == 0)
			ra(&(ps->a));
		if (ft_strncmp(buf, "rb", ft_strlen(buf)) == 0)
			rb(&(ps->b));	
		if (ft_strncmp(buf, "rra", ft_strlen(buf)) == 0)
			rra(&(ps->a));
		if (ft_strncmp(buf, "rrb", ft_strlen(buf)) == 0)
			rrb(&(ps->b));
		if (ft_strncmp(buf, "sa", ft_strlen(buf)) == 0)
			sa(&(ps->a));
		if (ft_strncmp(buf, "sb", ft_strlen(buf)) == 0)
			sb(&(ps->b));
		if (ft_strncmp(buf, "pa", ft_strlen(buf)) == 0)
			pa(&(ps->a), &(ps->b));
		if (ft_strncmp(buf, "pb", ft_strlen(buf)) == 0)
			pb(&(ps->a), &(ps->b));
		if (ft_strncmp(buf, "rr", ft_strlen(buf)) == 0)
			rr(&(ps->a), &(ps->b));
		if (ft_strncmp(buf, "ss", ft_strlen(buf)) == 0)
			ss(&(ps->a), &(ps->b));
		if (ft_strncmp(buf, "rrr", ft_strlen(buf)) == 0)
			rrr(&(ps->a), &(ps->b));

		display_pile(ps);
	}

//	display_pile(ps);
	
	//if (stack_rsorted(ps->a))
	//		printf("REVERSE SORTED\n");
	return (exit_and_free(ps, NO_MSG, MAIN_SUCCES));
}
