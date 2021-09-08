/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:40:16 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 04:51:40 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STORE_H
# define STORE_H

t_bool	store_stack_elem(t_stack **stack, int value);
t_sort	*init_sort_struct(int nb_chunks, t_stack *a);

#endif
