/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:18:58 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/17 10:51:00 by codespace        ###   ########.fr       */
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
		ft_printf("index %d: %d\n", i, stacks->a->array[i]);
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
		print_error(" ", NULL);
}

int	main(int ac, char **av)
{
	t_ps	*stacks;
	char	buffer[128];
	ssize_t	bytesRead;

	if (ac != 1)
	{
		stacks = fill_stacks(check_args(av));
		if (!stacks)
			print_error("\0", NULL);
		while (1)
		{
			bytesRead = read(0, buffer, sizeof(buffer) - 1);
			if (bytesRead < 0)
				print_error("Error reading input", NULL);
			buffer[bytesRead] = '\0';
			char *nl = ft_strchr(buffer, '\n');
			if (nl)
				*nl = '\0';
			move(stacks, buffer);
		}
		if (is_sorted(stacks->a) && is_empty(stacks->b))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		clean(stacks);
	}
	return (0);
}
