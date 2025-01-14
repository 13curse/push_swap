/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:14:52 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/14 14:12:48 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b = NULL;

	if (argc == 1)
		exit(1);
	if (argc == 2)
		stack_a = one_arg_handle(argv[1]);
	else
		stack_a = multiple_args_handle(argc, argv);
	if (!stack_a)
		return (1);
	if (stack_a_is_sorted(stack_a))
	{
		printf("Stack A is already sorted\n");
		free_stack(stack_a);
		return (0);
	}
	test_instructions(&stack_a, &stack_b);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	t_stack		*stack_a;
// 	t_stack		*stack_b = NULL;
// 	char		**split;

// 	if (argc == 1) // ou argv déjà trié
// 		exit(1);
// 	if (argc == 2)
// 	{
// 		split = split_args(argv[1]);
// 		if (!split)
// 			return (1);
// 		if (error_check(split_len(split), split))
// 		{
// 			free_split(split, split_len(split));
// 			return (1);
// 		}
// 		stack_a = create_list(split_len(split), split);
// 		free_split(split, split_len(split));
// 	}
// 	else
// 	{
// 		if (error_check(argc - 1, argv + 1))
// 			return (1);
// 		stack_a = create_list(argc - 1, argv + 1);
// 	}
// 	test_instructions(&stack_a, &stack_b);
// 	return (0);
// }


