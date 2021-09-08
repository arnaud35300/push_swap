/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 05:25:00 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/08 05:26:03 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H
/*
 * Defines
*/

# define TRUE 1
# define FALSE 0
# define MAIN_ERROR 1
# define MAIN_SUCCESS 0
# define NO_MSG NULL

/*
** Custom types.
*/

typedef int	t_bool;

/*
 * Push swap structures.
*/

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
}				t_ps;

typedef struct s_sort
{
	int		**chunks;
	int		chunk_id;
	int		nb_chunks;
	int		chunk_len;
	int		lst_chunk_len;
	int		len;
	t_stack	*hold_first;
	t_stack	*hold_second;
}				t_sort;

#endif
