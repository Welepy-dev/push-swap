/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:36:53 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 18:39:59 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	is_full(t_stack *stack)
{
	return (stack->top == stack->size - 1);
}

bool	is_empty(t_stack *stack)
{
	return (stack->top < -1);
}
