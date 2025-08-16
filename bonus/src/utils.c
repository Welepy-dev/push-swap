/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:36:53 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/16 11:38:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

bool	is_full(t_stack *stack)
{
	return (stack->top == stack->size - 1);
}

bool	is_empty(t_stack *stack)
{
	return (stack->top < 0);
}

bool	is_sorted(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i > 0)
	{
		if (stack->array[i] > stack->array[i - 1])
			return (false);
		i--;
	}
	return (true);
}
