/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:14:52 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:52:04 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack		*stack_a = NULL;
// t_stack		*stack_b = NULL;

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b = NULL;
	char		**split;

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
		stack_a = create_list(split_len(split), split);
		free_split(split, split_len(split));
	}
	else
	{
		if (error_check(argc - 1, argv + 1))
			return (1);
		stack_a = create_list(argc - 1, argv + 1);
	}
	test_instructions(&stack_a, &stack_b);
	return (0);
}


