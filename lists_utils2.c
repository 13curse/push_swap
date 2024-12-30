/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:24:44 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/30 15:24:50 by sbehar           ###   ########.fr       */
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

void	free_stack(stack_t *stack)
{
	stack_t *temp;
	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}