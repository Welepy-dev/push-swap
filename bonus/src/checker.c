/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:58 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/17 11:20:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	clean(t_ps *stacks)
{
	free(stacks->a->array);
	free(stacks->b->array);
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}

void	move(t_ps *stack, char *command)
{
	if (ft_strcmp(command, "pa") == 0)
		push(stack->b, stack->a, "\0");
	else if (ft_strcmp(command, "pb") == 0)
		push(stack->a, stack->b, "\0");
	else if (ft_strcmp(command, "ra") == 0)
		rotate(stack->a, "\0");
	else if (ft_strcmp(command, "rb") == 0)
		rotate(stack->b, "\0");
	else if (ft_strcmp(command, "rra") == 0)
		reverse_rotate(stack->a, "\0");
	else if (ft_strcmp(command, "rrb") == 0)
		reverse_rotate(stack->b, "\0");
	else if (ft_strcmp(command, "sa") == 0)
		swap(stack->a, "\0");
	else if (ft_strcmp(command, "sb") == 0)
		swap(stack->b, "\0");
	else if (ft_strcmp(command, "ss") == 0)
		swap_both(stack->a, stack->b, '\0');
	else if (ft_strcmp(command, "rr") == 0)
		rotate_both(stack->a, stack->b, '\0');
	else if (ft_strcmp(command, "rrr") == 0)
		reverse_rotate_both(stack->a, stack->b, '\0');
	else
		ft_dprintf(2, "Error\n");
}

void	final_check(t_ps *stacks)
{
	if (is_sorted(stacks->a) && is_empty(stacks->b))
			ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int ac, char **av)
{
	t_ps	*stacks;
	char	*line;
	ssize_t	len;

	if (ac != 1)
	{
		stacks = fill_stacks(check_args(av));
		if (!stacks)
			print_error("\0", NULL);
		line = get_next_line(0);
		while (line)
		{
			len = ft_strlen(line);
			if (len > 0 && line[len - 1] == '\n')
				line[len - 1] = '\0';
			if (*line != '\0')
				move(stacks, line);
			free(line);
			line = get_next_line(0);
		}
		free(line);
		final_check(stacks);
		clean(stacks);		//this is almost done, I just need to know how to close when is needed and clean everything in case if errors
	}
	return (0);
}