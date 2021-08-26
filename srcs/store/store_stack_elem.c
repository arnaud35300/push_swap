/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_stack_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:41:40 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/26 01:41:53 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	store_stack_elem(t_stack **stack, int value)
{
	t_stack	*new;
	
	new = ft_lstnew(value);
	if (!new)
		return (FALSE);
	ft_lstadd_back(stack, new);
	return (TRUE);
}
