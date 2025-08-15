/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:20:11 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/15 22:37:24 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "../libft/libft.h"

typedef struct s_stack
{
	char	id;
	int		top;
	int		size;
	int		*array;
}	t_stack;

t_stack	*fill_stack(char **nums);
char	**check_args(char **av);

#endif // !CHECKER_H
