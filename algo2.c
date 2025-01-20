/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:28:45 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/20 16:51:44 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	int	min_value;
	int	max_value;

	push_first_two_nodes(stack_a, stack_b, &min_value, &max_value);
	print_stacks(stack_a, stack_b);
	while (stack_size(*stack_a) > 3)
	{
		print_stacks(stack_a, stack_b);
		push_least_cost_node(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		push_back_stack_a(stack_a, stack_b);
		print_stacks(stack_a, stack_b);
	}
	put_smallest_top(stack_a);
	print_stacks(stack_a, stack_b);
}

void	sort_three(t_stack **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->value;
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if (first > second && second < third && first < third)
		sa(stack, true);
	else if (first > second && second > third)
	{
		sa(stack, true);
		rra(stack, true);
	}
	else if (first > second && second < third && first > third)
		ra(stack, true);
	else if (first < second && second > third && first < third)
	{
		sa(stack, true);
		ra(stack, true);
	}
	else if (first < second && second > third && first > third)
		rra(stack, true);
}

t_stack	*find_target_stack_a(t_stack *stack_a, int value)
{
	t_stack	*target_node = NULL;
	t_stack	*smallest;
	t_stack	*current;

	smallest = stack_a;
	current = stack_a;
	while (current)
	{
		if (current->value > value && 
			(!target_node || current->value < target_node->value))
				target_node = current;
		if (current->value < smallest->value)
			smallest = current;
		current = current->next;
	}
	if (target_node)
		return (target_node);
	else
		return (smallest);
}

int	get_position(t_stack *stack, t_stack *node)
{
	int	pos;

	pos = 0;
	while (stack && stack != node)
	{
		pos++;
		stack = stack->next;
	}
	return (pos);
}

void	push_back_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*target_node;
	int		size_a;
	int		target_pos;

	target_node = find_target_stack_a(*stack_a, (*stack_b)->value);
	size_a = stack_size(*stack_a);
	target_pos = get_position(*stack_a, target_node);
	if (target_pos <= size_a / 2)
	{
		while (*stack_a != target_node)
			ra(stack_a, true);
	}
	else
	{
		while (*stack_a != target_node)
			rra(stack_a, true);
	}
	pa(stack_a, stack_b, true);
}

