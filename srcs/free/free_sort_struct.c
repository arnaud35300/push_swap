/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_sort_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:03:07 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 04:53:13 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_sort_struct(t_sort **s, int status)
{
	int	i;

	i = -1;
	if (!(*s))
		return (status);
	if (!(*s)->chunks)
	{
		free(*s);
		return (status);
	}
	while (++i < (*s)->nb_chunks)
		free((*s)->chunks[i]);
	free((*s)->chunks);
	free(*s);
	return (status);
}
