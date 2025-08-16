/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:17:28 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/16 11:35:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

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
