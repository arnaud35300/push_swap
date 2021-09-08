/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 01:04:09 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:23:40 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

void	top_and_pstack_a(t_stack **a, t_stack **b, t_stack *elem);
void	top_and_pstack_b(t_stack **a, t_stack **b, t_stack *elem);
int		insertion_sort(t_stack **a, t_stack **b, int nb_chunks);
void	sort_three(t_stack **a);
void	sort_five(t_stack **a, t_stack **b);

#endif
