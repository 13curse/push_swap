/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:13:50 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/16 23:09:03 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_first_two_nodes(t_stack **stack_a, t_stack **stack_b, 
		int *max_value, int *min_value)
{
	int	temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	pb(stack_a, stack_b, false);
	*min_value = (*stack_b)->value;
	pb(stack_a, stack_b, false);
	*max_value = (*stack_b)->value;
	if (*max_value < *min_value)
	{
		temp = *min_value;
		*min_value = *max_value;
		*max_value = temp;
	}
}

t_stack	*find_target_node(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current_a;
	t_stack	*current_b;
	t_stack	*target_node = NULL;
	int		closest_lower;

	current_a = stack_a;
	closest_lower = INT_MIN;
	while (current_a)
	{
		current_b = stack_b;
		while (current_b)
		{
			if (current_b->value < current_a->value && 
				current_b->value > closest_lower)
					closest_lower = current_b->value;
			current_b = current_b->next;
		}
		if (closest_lower != INT_MIN)
		{
			current_b = stack_b;
			while(current_b)
			{
				if(current_b->value == closest_lower)
				{
					target_node = current_b;
					break;
				}
				current_b = current_b->next;
			}
		}
		current_a = current_a->next;
	}
	return (target_node);
}

int	push_cost(int pos_a, int pos_b, int size_a, int size_b)
{
	int	cost_a;
	int	cost_b;

	if (pos_a < size_a / 2)
		cost_a = pos_a;
	else
		cost_a = size_a - pos_a;
	if (pos_b < size_b / 2)
		cost_b = pos_b;
	else
		cost_b = size_b - pos_b;
	return (cost_a + cost_b + 1); // +1 = pb pour déplacer le noeud de A vers B
}

// void push(t_stack **stack, int value) {
//     t_stack *new_node = ft_stacknew(value);
//     new_node->next = *stack;
//     *stack = new_node;
// }

// void clear_stack(t_stack **stack) {
//     t_stack *current = *stack;
//     t_stack *next;

//     while (current != NULL) {
//         next = current->next;
//         free(current);
//         current = next;
//     }
//     *stack = NULL;
// }

// int main() 
// {
//     t_stack *stack_a = NULL;
//     t_stack *stack_b = NULL;

//     push(&stack_a, 25);
//     push(&stack_a, 30);

//     push(&stack_b, 10);
//     push(&stack_b, 26);
//     push(&stack_b, 85);

//     t_stack *current_a = stack_a;

//     while (current_a != NULL) {
//         t_stack *target_node = find_target_node(current_a, stack_b);
        
//         if (target_node != NULL) {
//             printf("Pour %d dans A, le nœud cible dans B est %d.\n", current_a->value, target_node->value);
//         } else {
//             printf("Pour %d dans A, il n'y a pas de nœud cible dans B.\n", current_a->value);
//         }

//         current_a = current_a->next;
//     }

//     clear_stack(&stack_a);
//     clear_stack(&stack_b);

//     return 0;
// }
