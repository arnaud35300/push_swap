/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 01:05:34 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/28 03:44:49 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_stack **a, t_stack **b)
{
	t_stack *current;

	if (ft_lstsize(*a) < 2)
		return ;
	current = (*a)->next;
	while (current)
	{
		if (stack_sorted(*a) && *b == NULL)
			return ;
		while ((*a)->next != current)
		{
			pb(a, b);
			printf("pb\n");
		}
		while (*b)
		{
			if ((*a)->nb > (*a)->next->nb)
			{
				sa(a);
				printf("sa\n");
			}
			pa(a, b);
			printf("pa\n");
		}
		if ((*a)->next == current && (*a)->nb > (*a)->next->nb)
		{
			sa(a);
			printf("sa\n");
		}
		current = current->next;
	}
}
