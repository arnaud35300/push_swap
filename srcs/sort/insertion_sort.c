/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 01:05:34 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/29 21:19:55 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	*store_in_chunk(int *arr, int arr_index, int size)
{
	int	*chunk;
	int	i;

	i = -1;
	chunk = malloc(sizeof(int) * (size));
	if (!chunk)
		return (chunk);
	while (++i < size)
		chunk[i] = arr[arr_index + i];
	return (chunk);
}

int	**create_chunks(int *arr, int arr_len, int nb_chunks)
{
	int	**chunks;
	int	i;

	i = -1;

	chunks = malloc(sizeof(int *) * nb_chunks);
	if (!chunks)
		return (chunks);
	while (++i < nb_chunks)
		if (i == nb_chunks - 1)
			chunks[i] = store_in_chunk(arr, (i * (arr_len / nb_chunks)), ((arr_len / nb_chunks) + (arr_len % nb_chunks)));
		else
			chunks[i] = store_in_chunk(arr, (i * (arr_len / nb_chunks)), (arr_len / nb_chunks));
	return (chunks);
}

typedef	struct	s_sort
{
	int **chunks;
	int	chunk_id;
	int	nb_chunks;
	int	chunk_len;
	int	lst_chunk_len;
	int	len;
	t_stack	*hold_first;
	t_stack	*hold_second;
}				t_sort;

t_sort	*init_sort_struct(int nb_chunks, t_stack *a)
{
	t_sort *s;

	s = malloc(sizeof(t_sort));
	if (!s)
		return (s);
	s->len = ft_lstsize(a);
	s->chunks = create_chunks(sort_array(a), s->len, nb_chunks);
	if (!s->chunks)
		return (NULL);
	s->chunk_id = 0;
	s->nb_chunks = nb_chunks;
	s->chunk_len = s->len / s->nb_chunks;
	s->lst_chunk_len = (s->len / s->nb_chunks) + (s->len % s->nb_chunks);
	s->hold_first = NULL;
	s->hold_second = NULL;
	return (s);
}

/*
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
}*/

t_bool	nb_in_stack(t_stack	*stack, int	nb)
{
	while (stack)
	{
		if (stack->nb == nb)
			return (TRUE);
		stack = stack->next;
	}
	return (FALSE);
}

t_stack	*find_hold_first(t_stack *a, t_stack *b, t_sort *s)
{
	int	i;
	int	len;

	i = -1;
	len = s->chunk_len;
	if (s->nb_chunks - 1 == s->chunk_id)
		len = s->lst_chunk_len;
	while (a)
	{
		i = -1;
		while (++i < len)
			if (a->nb == s->chunks[s->chunk_id][i] && !nb_in_stack(b, a->nb))
				return (a);
		a = a->next;
	}
	return (NULL);
}

t_stack	*find_hold_second(t_stack *a, t_stack *b, t_sort *s)
{
	t_stack	*elem;
	int		i;
	int		len;

	elem = NULL;
	i = -1;
	len = s->chunk_len;
	if (s->nb_chunks - 1 == s->chunk_id)
		len = s->lst_chunk_len;
	while (a)
	{
		i = -1;
		while (++i < len)
			if (a->nb == s->chunks[s->chunk_id][i] && !nb_in_stack(b, a->nb) && a != s->hold_first)
				elem = a;
		a = a->next;
	}
	return (elem);
}

t_bool	chunk_in_a(t_stack *a, t_sort *s)
{
	int	i;
	int	len;

	len = s->chunk_len;
	if (s->nb_chunks - 1 == s->chunk_id)
		len = s->lst_chunk_len;
	while (a)
	{
		i = -1;
		while (++i < len)
			if (a->nb == s->chunks[s->chunk_id][i])
				return (FALSE);
		a = a->next;
	}
	return (TRUE);
}

int	get_elem_position(t_stack *stack, t_stack *elem)
{
	int	i;

	i = 0;
	while (stack && stack != elem)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	nb_act_top(t_stack *stack, t_stack *elem)
{
	int	len;
	int	i;

	len = ft_lstsize(stack);
	i = get_elem_position(stack, elem);
	if (i > (len / 2))
		i = len - i;
	return (i);
}

void	top_and_pstack(t_stack **giver, t_stack **receiver, t_stack *elem)
{
	int		len;
	int		i;
	t_bool	reverse;

	len = ft_lstsize(*giver);
	i = get_elem_position(*giver, elem);
	reverse = FALSE;
	if (i > (len / 2))
		reverse = TRUE;
	while (*giver != elem)
	{
		if (reverse)
			rra(giver);
		else
			ra(giver);
	}
	pb(giver, receiver);
}

void	insertion_sort(t_stack **a, t_stack **b)
{
	t_sort	*s;	
	
	int	nb_chunks = 4;

	s = init_sort_struct(nb_chunks, *a);  
	if (!s || s->len < 2)
		return ;
	while (*a)
	{
		while (chunk_in_a(*a, s))
		{
			s->hold_first = find_hold_first(*a, *b, s);
			s->hold_second = find_hold_second(*a, *b, s);
			if (!s->hold_second || nb_act_top(*a, s->hold_first) >= nb_act_top(*a, s->hold_second))
				top_and_pstack(a, b, s->hold_first);	
		}
		s->chunk_id++;
	}
}
