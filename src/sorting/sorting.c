/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:31 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 23:21:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	highest_stack_number_index(t_stack *stack)
{
	int	i;
	int	highest_number;
	int	highest_number_index;

	i = 0;
	highest_number = INT_MIN;
	highest_number_index = 0;
	while (i <= stack->top)
	{
		if (stack->array[i] > highest_number)
		{
			highest_number = stack->array[i];
			highest_number_index = i;
		}
		i++;
	}
	return (highest_number_index);
}

int	smallest_stack_number_index(t_stack *stack)
{
	int	i;
	int	smallest_number;
	int	smallest_number_index;

	i = 0;
	smallest_number = INT_MAX;
	smallest_number_index = 0;
	while (i <= stack->top)
	{
		if (stack->array[i] < smallest_number)
		{
			smallest_number = stack->array[i];
			smallest_number_index = i;
		}
		i++;
	}
	return (smallest_number_index);
}

//void	push_smallest
//void	push_highest

void	tiny_sort(t_stack *stack)
{
	int	highest_position;

	highest_position = highest_stack_number_index(stack);
	if (highest_position == 2)
		rotate(stack, "ra");
	else if (highest_position == 1)
		reverse_rotate(stack, "rra");
	if (stack->array[2] > stack->array[1])
		swap(stack, "sa");
}

void	small_sort(t_ps *stacks)
{
	int	i;

	i = 0;
	
}

void	choose_sort(t_ps *stacks)
{
	if (stacks->a->size == 2)
		swap(stacks->a, "sa");
	else if (stacks->a->size == 3)
		tiny_sort(stacks->a);
	else if (stacks->a->size <= 5)
		small_sort(stacks);
}