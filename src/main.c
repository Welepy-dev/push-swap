/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:58 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/12 19:34:00 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	clean(t_ps *stacks)
{
	free(stacks->a.array);
	free(stacks->b.array);
	free(stacks);
}

int	main(int ac, char **av)
{
	t_ps	*stacks;

	if (ac != 1)
	{
		if (!(stacks = fill_stacks(av)))
			print_error("\0", NULL);
		clean(stacks);
	}
	return (0);
}
