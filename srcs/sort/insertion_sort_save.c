/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 01:05:34 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/29 05:18:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_smallest(t_stack *stack)
{
	t_stack	*smallest;

	smallest = stack;
	while (stack)
	{
		if (stack->nb < smallest->nb)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}

t_bool	near_end(t_stack *stack, t_stack *elem)
{
	t_stack *head;
	int	i;

	i = 0;
	head = stack;
	while (stack && elem != stack)
	{	
		i++;
		stack = stack->next;
	}
	return (i > (ft_lstsize(head) / 2));
}

int	*sort_array(t_stack *stack)
{
	int		*arr;
	int		i;
	int		j;
	int		n;

	n = ft_lstsize(stack);
	arr = malloc(sizeof(int) * n);
	i = -1;
	while (stack)
	{
		arr[++i] = stack->nb;
		stack = stack->next;
	}

	i = 1;
	j = 0;
	while (i < n)
	{
		if (arr[i] < arr[i -1])
		{
			j = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = j;
			i = 0;
		}
		i++;
	}
	return (arr);
}

t_bool	chunk_in_stack(t_stack *stack, int *arr, int chunk_id, int len)
{
	int i;

	i = (chunk_id - 1) * (len / 4);
	while (stack)
	{
		while (arr[i] < (len / 4) * chunk_id)
		{
			if (arr[i] == stack->nb)
				return (FALSE);
			i++;
		}
		stack = stack->next;
	}
	return (TRUE);
}

void	insertion_sort(t_stack **a, t_stack **b)
{
//t_stack *current;

	if (ft_lstsize(*a) < 2)
		return ;
/*	current = (*a)->next;
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
	}*/


//	t_stack *current;

//	current = *a;
/*
	while (*a || (!stack_sorted(*a) && !*b))
	{
		while (*a != find_smallest(*a))
		{
			if (near_end(*a, find_smallest(*a)))
			{
				rra(a);
				printf("ra\n");
			}
			else
			{
				ra(a);
				printf("ra\n");
			}
		}
		if (*a == find_smallest(*a))
		{
			pb(a, b);
			printf("pb\n");
		}
	}
	while (*b)
	{
		pa(a, b);
		printf("pa\n");
	}
	*/

	int len = ft_lstsize(*a);
	int *arr = sort_array(*a);
	t_stack *head;
	int chunk_id;

	chunk_id = 1;
	
	int i = 0;
	while (*a)
	{
		head = (*a);
		mid = ft_lstsize(head) / 2;
		while (chunk_in_stack(a, arr, chunk_id, len))
		{
			while (head->nb != )
		}
		chunk_id++;
	}

	(void)b;

}
