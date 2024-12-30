/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:26:42 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/30 12:26:42 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_instructions(stack_t **stack_a, stack_t **stack_b)
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

	free_stack(*stack_a);
	free_stack(*stack_b);
}

void	sa(stack_t **stack_a)
{
	int	temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;
	temp = (*stack_a)->value;	
	(*stack_a)->value = (*stack_a)->next->value;
	(*stack_a)->next->value = temp;
}

void	sb(stack_t **stack_b)
{
	int	temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return;
	temp = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = temp;
}

void	ss(stack_t **stack_a, stack_t **stack_b)
{
	int	temp_a;
	int	temp_b;

	if (*stack_a && (*stack_a)->next)
	{
		temp_a = (*stack_a)->value;
		(*stack_a)->value = (*stack_a)->next->value;
		(*stack_a)->next->value = temp_a;
	}
	if (*stack_b && (*stack_b)->next)
	{
		temp_b = (*stack_b)->value;
		(*stack_b)->value = (*stack_b)->next->value;
		(*stack_b)->next->value = temp_b;
	}
}

void	pa(stack_t **stack_a, stack_t **stack_b)
{
	stack_t	*temp;

	if (*stack_b == NULL)
		return;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	write(1, "pa\n", 3);
}


