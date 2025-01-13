/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:08:25 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:52:04 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_instructions(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	printf("After sa:\n");
	print_stacks(stack_a, stack_b);

	sb(stack_b);
	printf("After sb:\n");
	print_stacks(stack_a, stack_b);

	ss(stack_a, stack_b);
	printf("After ss:\n");
	print_stacks(stack_a, stack_b);

	pa(stack_a, stack_b);
	printf("After pa:\n");
	print_stacks(stack_a, stack_b);

	pb(stack_a, stack_b);
	printf("After pb:\n");
	print_stacks(stack_a, stack_b);

	pb(stack_a, stack_b);
	printf("After pb:\n");
	print_stacks(stack_a, stack_b);

	pb(stack_a, stack_b);
	printf("After pb:\n");
	print_stacks(stack_a, stack_b);

	ra(stack_a);
	printf("After ra:\n");
	print_stacks(stack_a, stack_b);

	rb(stack_b);
	printf("After rb:\n");
	print_stacks(stack_a, stack_b);
	
	rr(stack_a, stack_b);
	printf("After rr:\n");
	print_stacks(stack_a, stack_b);

	rra(stack_a);
	printf("After rra:\n");
	print_stacks(stack_a, stack_b);
	
	rrb(stack_b);
	printf("After rrb:\n");
	print_stacks(stack_a, stack_b);
	
	rrr(stack_a, stack_b);
	printf("After rrr\n");
	print_stacks(stack_a, stack_b);
	
	free_stack(*stack_a);
	free_stack(*stack_b);
}
