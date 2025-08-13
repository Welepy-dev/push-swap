/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:56 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 18:17:15 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	char	id;
	int		top;
	int		size;
	int		*array;
}	t_stack;

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
	int		size;
}	t_ps;

t_ps	*fill_stacks(char **nums);
char	**check_args(char **nums);

//moves
void	push(t_stack src, t_stack dst, char *op);

//moves
bool	is_full(t_stack stack);
bool	is_empty(t_stack stack);

#endif // !PUSH_SWAP_HPP
