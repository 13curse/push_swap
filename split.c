/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:13:09 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/17 15:18:56 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s);

static int	is_sep(char c)
{
	return (c  == ' ');
}

static int	count_args(char *str)
{
	int	count;
	int	in_arg;

	count = 0;
	in_arg = 0;
	while (*str)
	{
		if (!is_sep(*str) && !in_arg)
		{
			in_arg  = 1;
			count++;
		}
		else if (is_sep(*str))
			in_arg = 0;
		str++;
	}
	return (count);
}

static char	*copy_arg(char *str, int start, int end)
{
	char	*arg;
	int		i;

	arg = malloc(sizeof(char) * (end - start + 1));
	if (!arg)
		return (NULL);
	i = 0;
	while (start < end)
		arg[i++] = str[start++];
	arg[i] = '\0';
	return (arg);
}

static char	**free_split(char **split, int count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
	return (NULL);
}

char	**split_args(char *str)
{
	char	**result;
	int		i;
	int		start;
	int		end;

	if (!str)
		return (NULL);
	result = malloc(sizeof(char *) * (count_args(str) + 1));
	if (!result)
		return (NULL);
	i = -1;
	start = 0;
	while (++i < count_args(str))
	{
		while (is_sep(str[start]))
			start++;
		end = start;
		while (str[end] && !is_sep(str[end]))
			end++;
		result[i] = copy_arg(str, start, end);
		if (!result[i])
			return (free_split(result, i));
		start = end;
	}
	return (result);
}

/* int	main(int ac, char **av)
{
	int		i;
	char	**args = split_args(av[1]);

	i = 0;
	if (ac != 2)
		return (1);
	if (!args)
		return (1);
	while (args[i])
	{
		write(1, args[i], ft_strlen(args[i]));
		write(1, "\n", 1);
		i++;
	}
	free_split(args, i);
	return (0);
} */