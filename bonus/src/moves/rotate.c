/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:13:11 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/17 10:44:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	rotate(t_stack *stack, char *op)
{
	int	temp;

	if (stack->top < 1)
		print_error("op ID: R", NULL);
	else
	{
		temp = stack->array[stack->top];
		ft_memmove(&stack->array[1], \
		&stack->array[0], stack->top * sizeof(int));
		stack->array[0] = temp;
	}
	if (*op)
		ft_printf("%s\n", op);
}

int	reverse_rotate(t_stack *stack, char *op)
{
	int	temp;

	if (stack->top < 1)
		print_error("op ID: RR", NULL);
	else
	{
		temp = stack->array[0];
		ft_memmove(&stack->array[0], &stack->array[1], \
		stack->top * sizeof(int));
		stack->array[stack->top] = temp;
	}
	if (*op)
		ft_printf("%s\n", op);
	return (1);
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b, char op)
{
	rotate(stack_a, "\0");
	rotate(stack_b, "\0");
	if (op)
		ft_printf("rr\n");
}

void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b, char op)
{
	reverse_rotate(stack_a, "\0");
	reverse_rotate(stack_b, "\0");
	if (op)
		ft_printf("rrr\n");
}
