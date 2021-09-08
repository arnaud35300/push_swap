/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_chunks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 05:01:10 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 05:07:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**create_chunks(int *arr, int arr_len, int nb_chunks)
{
	int	**chunks;
	int	i;
	int	d;

	i = -1;
	d = arr_len / nb_chunks;
	chunks = malloc(sizeof(int *) * nb_chunks);
	if (!chunks)
		return (chunks);
	while (++i < nb_chunks)
	{
		if (i == nb_chunks - 1)
			chunks[i] = store_in_chunk(arr, i * d, d + (arr_len % nb_chunks));
		else
			chunks[i] = store_in_chunk(arr, (i * d), d);
	}
	return (chunks);
}
