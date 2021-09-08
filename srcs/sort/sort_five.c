/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:22:57 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:59:59 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_act_to_insert_elem(t_stack *stack, t_stack *elem)
{
	int	i;

	i = 0;
	if (elem->nb < stack->nb && elem->nb > ft_lstlast(stack)->nb)
		return (i);
	while (stack && stack->next)
	{
		i++;
		if (elem->nb > stack->nb && elem->nb < stack->next->nb)
			return (i);
		stack = stack->next;
	}
	return (i);
}

static void	min_to_top(t_stack **a, t_stack **b)
{
	t_bool	reverse;

	(void)b;
	reverse = FALSE;
	if (get_elem_position(*a, smallest_elem(*a)) > (ft_lstsize(*a) / 2))
		reverse = TRUE;
	while (*a != smallest_elem(*a))
		rx_or_rrx(a, NULL, reverse);
}

static void	prepare_stack_a(t_stack **a, t_stack **b)
{
	int		count;
	t_bool	reverse;

	if (is_greatest(*a, *b) || is_smallest(*a, *b))
		return (min_to_top(a, b));
	count = count_act_to_insert_elem(*a, *b);
	reverse = FALSE;
	if (count > (ft_lstsize(*a) / 2))
		reverse = TRUE;
	if (reverse)
		count = ft_lstsize(*a) - count;
	while (count)
	{
		rx_or_rrx(a, NULL, reverse);
		count--;
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	reverse;

	reverse = FALSE;
	pb(a, b, TRUE);
	pb(a, b, TRUE);
	sort_three(a);
	while (*b)
	{
		prepare_stack_a(a, b);
		pa(a, b, TRUE);
	}
	if (get_elem_position(*a, smallest_elem(*a)) > (ft_lstsize(*a) / 2))
		reverse = FALSE;
	while (*a != smallest_elem(*a))
	{
		if (reverse)
			rra(a, TRUE);
		else
			ra(a, TRUE);
	}
}
