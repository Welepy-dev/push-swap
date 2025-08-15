/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:16:10 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/15 22:34:24 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

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
	return (0);
}
