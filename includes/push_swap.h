/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:58:20 by arguilla          #+#    #+#             */
/*   Updated: 2021/08/24 03:18:35 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
** Include dependencies and librairies.
*/

# include "../libft/libft.h"
# include <limits.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>

/*
 * Defines
*/

# define TRUE 1
# define FALSE 0

/*
** Custom types.
*/

typedef int	t_bool;

/*
 * Push swap structures.
*/

typedef struct	s_ps
{
	t_stack	*a;
	t_stack	*b;
}				t_ps;

/*
** Functions prototypes.
*/

# include "parser.h"
# include "free.h"

#endif
