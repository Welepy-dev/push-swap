/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:33:27 by marcsilv          #+#    #+#             */
/*   Updated: 2025/08/12 19:33:31 by marcsilv         ###   ########.fr       */
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

bool	check_args(char **av)
{
	char	*divided_nums;
	char	**nums;
	int		arr[4];

	divided_nums = get_all_args(av);
	nums = ft_split(divided_nums, ' ');
	ft_bzero((int *)arr, 4);
	arr[3] = true;
	arr[1] = matrix_len(nums);
	while (arr[0] < arr[1])
	{
		if (ft_strspn(nums[arr[0]], "0123456789") != ft_strlen(nums[arr[0]]))
			arr[3] = false;
		if (ft_atoi(nums[arr[0]]) > INT_MAX || ft_atoi(nums[arr[0]]) < INT_MIN)
			arr[3] = false;
		arr[2] = arr[0];
		while (++arr[2] < arr[1])
			if (!ft_strcmp(nums[arr[0]], nums[arr[2]]))
				arr[3] = false;
		arr[0]++;
	}
	ft_free(&divided_nums);
	free_matrix(nums);
	return (arr[3]);
}
