/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:22:08 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/16 11:34:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	push(t_stack *src, t_stack *dst, char *op)
{
	if (is_empty(src))
		print_error("Source is empty. op ID: Push", NULL);
	if (is_full(dst))
		print_error("Destiny is full. op ID: Push", NULL);
	dst->top++;
	dst->array[dst->top] = src->array[src->top];
	src->top--;
	if (*op)
		ft_printf("%s\n", op);
}
