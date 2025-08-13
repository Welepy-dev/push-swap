/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:33:27 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 19:06:57 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*get_all_args(char **av)
{
	int		i;
	char	*divided_nums;
	char	*tmp;
	char	*new_str;

	i = 1;
	divided_nums = ft_strdup(" ");
	while (i < matrix_len(av))
	{
		tmp = ft_strjoin(" ", av[i]);
		new_str = ft_strjoin(divided_nums, tmp);
		ft_free(&divided_nums);
		ft_free(&tmp);
		divided_nums = new_str;
		i++;
	}
	return (divided_nums);
}

char	**free_stuff(char **nums, char *divided_nums)
{
	free_matrix(nums);
	ft_free(&divided_nums);
	return (NULL);
}

char	**check_args(char **av)
{
	char	*divided_nums;
	char	**nums;
	int		arr[3];

	divided_nums = get_all_args(av);
	nums = ft_split(divided_nums, ' ');
	ft_bzero((int *)arr, sizeof(arr));
	arr[1] = matrix_len(nums);
	while (arr[0] < arr[1])
	{
		arr[2] = arr[0];
		while (++arr[2] < arr[1])
			if (!ft_strcmp(nums[arr[0]], nums[arr[2]]))
				return (free_stuff(nums, divided_nums));
		if (ft_strspn(nums[arr[0]], "0123456789") != ft_strlen(nums[arr[0]]))
			return (free_stuff(nums, divided_nums));
		if (ft_atoi(nums[arr[0]]) > INT_MAX || ft_atoi(nums[arr[0]]) < INT_MIN)
			return (free_stuff(nums, divided_nums));
		arr[0]++;
	}
	ft_free(&divided_nums);
	return (nums);
}

t_ps	*fill_stacks(char **nums)
{
	t_ps	*ps;
	int		i;

	ps = (t_ps *)safe_malloc(sizeof(t_ps));
	ps->a = (t_stack *)safe_malloc(sizeof(t_stack));
	ps->b = (t_stack *)safe_malloc(sizeof(t_stack));
	if (!ps || !nums)
		return (NULL);
	ps->size = matrix_len(nums);
	ps->b->size = ps->size;
	ps->a->size = ps->size;
	ps->a->array = ft_calloc(ps->size, sizeof(int));
	ps->b->array = ft_calloc(ps->size, sizeof(int));
	ps->a->id = 'A';
	ps->b->id = 'B';
	ps->b->top = -1;
	ps->a->top = -1;
	i = ps->size;
	while (--i)
		ps->a->array[++ps->a->top] = ft_atoi(nums[i]);
	free_matrix(nums);
	return ps;
}

