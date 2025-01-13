/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:55:16 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:52:02 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	rrr(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*last_a;
// 	t_stack	*second_last_a;
// 	t_stack	*last_b;
// 	t_stack	*second_last_b;

// 	if (*stack_a && (*stack_a)->next)
// 	{
// 		last_a = *stack_a;
// 		second_last_a = NULL;
// 		while (last_a->next != NULL)
// 		{
// 			second_last_a = last_a;
// 			last_a = last_a->next;
// 		}
// 		last_a->next = *stack_a;
// 		*stack_a = last_a;
// 		second_last_a->next = NULL;
// 	}
// 	if (*stack_b && (*stack_b)->next)
// 	{
// 		last_b = *stack_b;
// 		second_last_b = NULL;
// 		while (last_b->next != NULL)
// 		{
// 			second_last_b = last_b;
// 			last_b = last_b->next;
// 		}
// 		last_b->next = *stack_b;
// 		*stack_b = last_b;
// 		second_last_b->next = NULL;
// 	}
// 	write(1, "rrr\n", 4);
// }

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a && (*stack_a)->next)
		rra(stack_a);
	if (*stack_b && (*stack_b)->next)
		rrb(stack_b);
	write(1, "rrr\n", 4);
}
