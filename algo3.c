/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:38:52 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/20 14:43:49 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_smallest(t_stack *stack)
{
	t_stack	*smallest;
	t_stack	*current;

	smallest = stack;
	current = stack;
	while (current)
	{
		if (current->value < smallest->value)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}

void	put_smallest_top(t_stack **stack_a)
{
	t_stack	*smallest;
	int		size;
	int		pos;

	smallest = find_smallest(*stack_a);
	size = stack_size(*stack_a);
	pos = get_position(*stack_a, smallest);
	if (pos <= size / 2)
	{
		while (*stack_a != smallest)
			ra(stack_a, true);
	}
	else
	{
		while (*stack_a != smallest)
			rra(stack_a, true);
	}
}