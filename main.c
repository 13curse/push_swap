/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:14:52 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/18 14:49:26 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	node_t	*stack;
	node_t	*new_node;
	int		i;
	int		value;

	stack = NULL;
	i = 1;
	if (argc == 1)
		exit(1);
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		new_node = ft_lstnew(value);
		if (new_node == NULL)
		{
			exit(1);
		}
		ft_lstadd_back(&stack, new_node);
		i++;
	}
	// print_stack(stack);
	return (0);
}
