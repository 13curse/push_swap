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

t_stack	*ft_lstnew(int val)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = val;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(t_stack **stack, t_stack *new)
{
	if ((stack == NULL) |(new == NULL))
		return ;
	new->next = *stack;
	*stack = new;
}

void	ft_lstadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

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

t_stack	*create_list(int arglen, char **args)
{
	t_stack	*stack;
	t_stack	*new_node;
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
void	print_stack(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	while (current != NULL)
	{
		printf("%d -> ", current->value);
		current = current->next;
	}
	printf("NULL\n");
}

void	print_stacks(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

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
