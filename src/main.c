/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:58 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 21:04:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	clean(t_ps *stacks)
{
	free(stacks->a->array);
	free(stacks->b->array);
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}

void	debug_b(t_ps *stacks)
{
	ft_printf("STACK B\n");
	for (int i = stacks->b->top; i >= 0; i--)
		ft_printf("%d\n", stacks->b->array[i]);
}

void	debug_a(t_ps *stacks)
{
	ft_printf("STACK A\n");
	for (int i = stacks->a->top; i >= 0; i--)
		ft_printf("n%d: %d\n", i, stacks->a->array[i]);
}

int	main(int ac, char **av)
{
	t_ps	*stacks;

	if (ac != 1)
	{
		stacks = fill_stacks(check_args(av));
		if (!stacks)
			print_error("\0", NULL);
		clean(stacks);
	}
	return (0);
}
