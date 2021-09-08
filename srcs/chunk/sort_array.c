/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 04:55:18 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/07 04:22:27 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_int(int *i, int *j, int a, int b)
{
	*i = a;
	*j = b;
}

int	*sort_array(t_stack *stack)
{
	int	*arr;
	int	i;
	int	j;
	int	n;

	init_int(&i, &n, -1, ft_lstsize(stack));
	arr = malloc(sizeof(int) * n);
	if (!arr)
		return (arr);
	while (stack)
	{
		arr[++i] = stack->nb;
		stack = stack->next;
	}
	init_int(&i, &j, 0, 0);
	while (++i < n)
	{
		if (arr[i] < arr[i - 1])
		{
			init_int(&j, &arr[i], arr[i], arr[i - 1]);
			arr[i - 1] = j;
			i = 0;
		}
	}
	return (arr);
}
