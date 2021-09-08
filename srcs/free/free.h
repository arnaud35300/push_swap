/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 03:02:39 by arguilla          #+#    #+#             */
/*   Updated: 2021/09/06 08:12:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H

int		exit_and_free(t_ps *ps, char *msg, int status);
int		exit_and_free_str(char **s, int status);
void	free_stack(t_stack *stack);
int		free_sort_struct(t_sort **s, int status);

#endif
