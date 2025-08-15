/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:16:10 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/15 23:16:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	clean(t_stack *stack)
{
	free(stack->array);
	free(stack);
}

void	debug_a(t_stack *a)
{
	ft_printf("STACK A\n");
	for (int i = a->top; i >= 0; i--)
		ft_printf("index %d: %d\n", i, a->array[i]);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = fill_stack(check_args(av));
	debug_a(stack_a);
	if (ac != 1)
	{

	}
	clean (stack_a);
	return (0);
}
