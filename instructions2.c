/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:23:43 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/30 16:23:43 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(stack_t **stack_a)
{
	stack_t	*temp;
	stack_t	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(stack_t **stack_b)
{
	stack_t	*temp;
	stack_t	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(stack_t	**stack_a, stack_t **stack_b)
{
	stack_t	*temp_a;
	stack_t	*temp_b;
	stack_t	*last_a;
	stack_t	*last_b;

	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		temp_a = *stack_a;
		*stack_a = (*stack_a)->next;
		last_a = *stack_a;
		while (last_a->next != NULL)
			last_a = last_a->next;
		last_a->next = temp_a;
		temp_a->next = NULL;

		temp_b = *stack_b;
		*stack_b = (*stack_b)->next;
		last_b = *stack_b;
		while (last_b->next != NULL)
			last_b = last_b->next;
		last_b->next = temp_b;
		temp_b->next = NULL;
	}
	write(1, "rr\n", 3);
}
void	rra(stack_t **stack_a)
{
	stack_t	*last;
	stack_t	*second_last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = *stack_a;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	last->next = *stack_a;
	*stack_a = last;
	second_last->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(stack_t **stack_b)
{
	stack_t	*last;
	stack_t	*second_last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	last->next = *stack_b;
	*stack_b = last;
	second_last->next = NULL;
	write(1, "rrb\n", 4);
}