/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:06:47 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:12:11 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

void	sa(t_stack **a, t_bool display);
void	sb(t_stack **b, t_bool display);
void	ss(t_stack **a, t_stack **b, t_bool display);
void	pb(t_stack **a, t_stack **b, t_bool display);
void	pa(t_stack **a, t_stack **b, t_bool display);
void	ra(t_stack **a, t_bool display);
void	rb(t_stack **b, t_bool display);
void	rr(t_stack **a, t_stack **b, t_bool display);
void	rra(t_stack **a, t_bool display);
void	rrb(t_stack **b, t_bool display);
void	rrr(t_stack **a, t_stack**b, t_bool display);

#endif
