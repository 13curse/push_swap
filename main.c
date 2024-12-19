/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:14:52 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/19 16:40:44 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_len(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (i);
	while (split[i])
		i++;
	return (i);
}

node_t	*create_list(int arglen, char **args)
{
	node_t	*stack;
	node_t	*new_node;
	int		i;
	int		value;

	stack = NULL;
	i = 0;
	while (i < arglen)
	{
		value = ft_atoi(args[i]);
		new_node = ft_lstnew(value);
		if (new_node == NULL)
		{
			// il faudra free split
			exit(1);
		}
		ft_lstadd_back(&stack, new_node);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	node_t	*stack;
	char	**split;

	if (argc == 1)
		exit(1);
	if (argc == 2)
	{
		split = split_args(argv[1]);
		if (!split)
			return (1);
		if (error_check(split_len(split), split))
		{
			free_split(split, split_len(split));
			return (1);
		}
		stack = create_list(split_len(split), split);
		free_split(split, split_len(split));
	}
	else
	{
		if (error_check(argc - 1, argv + 1))
			return (1);
		stack = create_list(argc - 1, argv + 1);
	}
	print_stack(stack);
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

