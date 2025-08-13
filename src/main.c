/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:58 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 15:53:49 by marcsilv         ###   ########.fr       */
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
		stacks = fill_stacks(check_args(av));
		if (!stacks)
			print_error("\0", NULL);

		ft_printf(" == for debug == \n");
		ft_printf("STACK A\n");
		for (int i = 0; i < stacks->size; i++)
			ft_printf("%d\n", stacks->a.array[i]);
		ft_printf(" == for debug == \n");

		clean(stacks);
	}
	return (0);
}
