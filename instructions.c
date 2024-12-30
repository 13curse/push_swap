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

void	sa(stack_t *stack_a)
{
	int	temp;

	if (stack_a == NULL || stack_a->next == NULL)
		return;
	temp = stack_a->value;	
	stack_a->value = stack_a->next->value;
	stack_a->next->value = temp;
}

void	sb(stack_t *stack_b)
{
	int	temp;

	if (stack_b == NULL || stack_b->next == NULL)
		return;
	temp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = temp;
}

