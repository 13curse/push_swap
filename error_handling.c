/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:04:40 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:43:48 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_type(int arglen, char **args)
{
	int	i;
	int	j;

	i = 0;
	while (i < arglen)
	{
		j = 0;
		if (args[i][0] == '-')
			j++;
		if (args[i][j] == '\0')
			return (-1);
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]))
				return (-1);
			j++;
		}
		// if (!ft_isint((long long)argv[i]))
		// 	return (-1);
		i++;
	}
	return (0);
}

int	error_duplicate(int arglen, char **args)
{
	int	i;
	int	j;
	int	val_i;
	int	val_j;

	if (arglen < 2)
		return (0);
	i = 0;
	while (i < arglen)
	{
		val_i = ft_atoi(args[i]);
		j = i + 1;
		while (j < arglen)
		{
			val_j = ft_atoi(args[j]);
			if (val_i == val_j)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	error_check(int arglen, char **args)
{
	if (error_type(arglen, args) == -1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (error_duplicate(arglen, args) == -1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
