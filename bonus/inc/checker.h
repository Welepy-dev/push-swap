/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:56 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/15 23:30:03 by codespace        ###   ########.fr       */
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

typedef struct s_ps
{
	t_stack	*a;
	t_stack	*b;
	int		size;
}	t_ps;

t_ps	*fill_stacks(char **nums);
char	**check_args(char **nums);

//moves
void	swap(t_stack *stack, char *op);
void	rotate(t_stack *stack, char *op);
int		reverse_rotate(t_stack *stack, char *op);
void	push(t_stack *src, t_stack *dst, char *op);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);

//bools
bool	is_sorted(t_stack *stack);
bool	is_full(t_stack *stack);
bool	is_empty(t_stack *stack);

#endif // !PUSH_SWAP_HPP
