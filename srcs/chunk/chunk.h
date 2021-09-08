/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 04:54:20 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:20:00 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_H
# define CHUNK_H

int		*sort_array(t_stack *stack);
int		*store_in_chunk(int *arr, int arr_index, int size);
int		**create_chunks(int *arr, int arr_len, int nb_chunks);
t_bool	chunk_in_a(t_stack *a, t_sort *s);

#endif
