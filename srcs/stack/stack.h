/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:21:06 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:34:13 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

void	prepare_stack_to_receive(t_stack **stack, t_stack *elem);
t_stack	*elem_before_elem(t_stack *stack, t_stack *elem);
t_stack	*elem_after_elem(t_stack *stack, t_stack *elem);
t_stack	*greatest_elem(t_stack *stack);
t_stack	*smallest_elem(t_stack *stack);
t_bool	is_greatest(t_stack *stack, t_stack *elem);
t_bool	is_smallest(t_stack *stack, t_stack *elem);
int		nb_act_top(t_stack *stack, t_stack *elem);
int		get_elem_position(t_stack *stack, t_stack *elem);
t_stack	*find_hold_second(t_stack *a, t_stack *b, t_sort *s);
t_stack	*find_hold_first(t_stack *a, t_stack *b, t_sort *s);
t_bool	nb_in_stack(t_stack	*stack, int	nb);
void	rx_or_rrx(t_stack **a, t_stack **b, t_bool reverse);
#endif
