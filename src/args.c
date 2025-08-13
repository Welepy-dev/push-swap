/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:33:27 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/13 11:46:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

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

char	**check_args(char **av)
{
	char	*divided_nums;
	char	**nums;
	int		arr[3];

	divided_nums = get_all_args(av);
	nums = ft_split(divided_nums, ' ');
	ft_bzero((int *)arr, 3);
	arr[1] = matrix_len(nums);
	while (arr[0] < arr[1])
	{
		if (ft_strspn(nums[arr[0]], "0123456789") != ft_strlen(nums[arr[0]]))
			free_matrix(nums);
		if (ft_atoi(nums[arr[0]]) > INT_MAX || ft_atoi(nums[arr[0]]) < INT_MIN)
			free_matrix(nums);
		arr[2] = arr[0];
		while (++arr[2] < arr[1])
			if (!ft_strcmp(nums[arr[0]], nums[arr[2]]))
				free_matrix(nums);
		arr[0]++;
	}
	ft_free(&divided_nums);
	return (nums);
}

t_ps	*fill_stacks(char **nums)
{
	t_ps	*ps;
	int		i;

	if (!nums)
		return (NULL);
	i = matrix_len(nums);
	ft_printf("%d\n", i);
	ps = (t_ps *)malloc(sizeof(t_ps));
	ps->a.array = (int *)ft_calloc(i, sizeof(int));
	ps->b.array = (int *)ft_calloc(i, sizeof(int));
	/*while (i >= 0)
	{
		ps->a.array[i] = ft_atoi(nums[i]);
		i--;
	}*/
	return (ps);
}

