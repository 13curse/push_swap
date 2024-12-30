/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:27:59 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/18 12:27:59 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack_t	*ft_lstnew(int val)
{
	stack_t	*new_node;

	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);
	new_node->value = val;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(stack_t **stack, stack_t *new)
{
	if ((stack == NULL) |(new == NULL))
		return ;
	new->next = *stack;
	*stack = new;
}

void	ft_lstadd_back(stack_t **stack, stack_t *new)
{
	stack_t	*last;

	if (stack == NULL || new == NULL)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

stack_t	*create_list(int arglen, char **args)
{
	stack_t	*stack;
	stack_t	*new_node;
	int		i;
	int		value;

	stack = NULL;
	i = 0;
	while (i < arglen)
	{
		value = ft_atoi(args[i]);
		new_node = ft_lstnew(value);
		if (new_node == NULL)
		{
			// il faudra free split
			exit(1);
		}
		ft_lstadd_back(&stack, new_node);
		i++;
	}
	return (stack);
}

// Print stack for test
void	print_stack(stack_t *stack)
{
	stack_t	*current;

	current = stack;
	while (current != NULL)
	{
		printf("%d -> ", current->value);
		current = current->next;
	}
	printf("NULL\n");
}

void	print_stacks(stack_t **a, stack_t **b)
{
	stack_t	*temp_a;
	stack_t	*temp_b;

	temp_a = *a;
	temp_b = *b;
	printf("Stack A: ");
	while (temp_a)
	{
		printf("%d ", temp_a->value);
		temp_a = temp_a->next;
	}
	printf("\nStack B: ");
	while (temp_b)
	{
		printf("%d ", temp_b->value);
		temp_b = temp_b->next;
	}
	printf("\n\n");
}