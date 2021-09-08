/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_in_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:00:26 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:00:56 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
