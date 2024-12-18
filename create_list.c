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

node_t	*ft_lstnew(int val)
{
	node_t	*new_node;

	new_node = (node_t *)malloc(sizeof(node_t));
	if (!new_node)
		return (NULL);
	new_node->data = val;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(node_t **stack, node_t *new)
{
	if ((stack == NULL) |(new == NULL))
		return ;
	new->next = *stack;
	*stack = new;
}

void	ft_lstadd_back(node_t **stack, node_t *new)
{
	node_t	*last;

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

// Print stack for test
void	print_stack(node_t *stack)
{
	node_t	*current;

	current = stack;
	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}