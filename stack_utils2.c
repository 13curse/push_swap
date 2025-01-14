/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:24:44 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/14 15:48:53 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_len(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (i);
	while (split[i])
		i++;
	return (i);
}

void	free_stack(t_stack *stack)
{
	t_stack	*temp;
	
	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while(stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

bool	stack_is_empty(t_stack *stack)
{
	return (stack == NULL);
}
