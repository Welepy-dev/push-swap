/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:56 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 15:35:22 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int	*array;
}	t_stack;

typedef struct s_ps
{
	t_stack	a;
	t_stack	b;
	int		size;
}	t_ps;

t_ps	*fill_stacks(char **nums);
char	**check_args(char **nums);

#endif // !PUSH_SWAP_HPP
