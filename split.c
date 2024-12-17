/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:13:09 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/17 11:32:23 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sep(char c)
{
	return (c  == ' ');
}

static int	count_args(char **argv)
{
	int	count;
	int	in_arg;

	count = 0;
	in_arg = 0;
	while (**argv)
	{
		if (!is_sep(**argv) && !in_arg)
		{
			in_arg  = 1;
			count++;
		}
		else if (is_sep(**argv))
			in_arg = 0;
		*argv++;
	}
	return (count);
}

static char	*copy_arg(char **argv, int start, int end)
{
	char	*arg;
	int		i;

	arg = malloc(sizeof(char) * (end - start + 1));
	if (!arg)
		return (NULL);
	i = 0;
	while (start < end)
		arg[i++] = *argv[start++];
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

char	**split_args(char **argv)
{
	char	**result;
	int		i;
	int		start;
	int		end;

	if (!*argv)
		return (NULL);
	result = malloc(sizeof(char *) * (count_args(*argv) + 1));
	if (!result)
		return (NULL);
	i = -1;
	start = 0;
	while (++i < count_args(*argv))
	{
		while (is_sep(*argv[start]))
			start++;
		end = start;
		while (*argv[end] && !is_sep(*argv[end]))
			end++;
		result[i] = copy_arg(*argv, start, end);
		if (!result[i])
			return (free_split(result, i));
		start = end;
	}
	return (result);
}
