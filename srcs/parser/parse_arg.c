/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:20:57 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/25 20:50:23 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	stack_dup(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->nb == value)
			return (TRUE);
		stack = stack->next;
	}
	return (FALSE);
}

t_bool	parse_arg(t_ps **ps, char *s)
{
	char	*endptr;
	int		err;
	int		value;
	size_t	len;

	if (s == NULL)
		return (FALSE);
	len = ft_strlen(s);
	while (s[--len] == ' ')
		s[len] = '\0';
	if (*s == '\0')
		return (FALSE);
	while (*s)
	{
		value = ft_strtol(s, &endptr, 10, &err);
		if (err || ft_strncmp(s, endptr, ft_strlen(s)) == 0
			|| stack_dup((*ps)->a, value))
			return (FALSE);
		s = endptr;
		if (!store_stack_elem(&(*ps)->a, value))
			return (FALSE);
	}
	return (TRUE);
}
