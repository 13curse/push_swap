/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:04:40 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/17 11:00:08 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_one_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i]))
		{
			write(2, "Error\n", 6);
			return(-1);
		}
		i++;
		if (!ft_isint(argv[1]))
		{
			write(2, "Error\n", 6);
			return (-1);
		}

	}
	return (0);
}

int	isdupli_one_arg(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 1;
		while (argv[1][i])
		{
			j = i + 1;
			while (argv[1][j])
			{
				if (ft_strcmp(argv[1][i], argv[1][j]) == 0)
				{
					write(2, "Error\n", 6);
					return (-1);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}

int	error_many_args(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j]) 
		{
			if (!ft_isdigit(argv[i]))
			{
				write(2, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		if (!ft_isint(argv[i]))
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}
return (0);

int	isdupli_many_args(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		j = i + i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				write(2, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

