/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:17:28 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 19:18:10 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_stack *stack, char *op)
{
	int	temp;

	if (stack->top < 1)
	{
		print_error("op ID: S", NULL);
		return ;
	}
	temp = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = temp;
	if (*op)
		ft_printf("%s\n", op);
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, "\0");
	swap(stack_b, "\0");
	ft_printf("ss\n");
}
