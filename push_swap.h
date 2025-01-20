/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/20 16:44:25 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>
//# include "./libft/libft.h"

/* cc -Wall -Wextra -Werror error_handling.c instructions.c instructions2.c
lists_utils.c lists_utils2.c split.c utils.c main.c */

typedef struct stack
{
	int				value;
	int				index;
	// int				push_cost;
	// bool			above_median;
	// bool			cheapest;
	struct stack	*next;
	// struct stack	*prev;
	// struct stack	*target_node;
}	t_stack;

// UTILS.C
int			ft_strlen(char *s);
long long	ft_atoi(const char *nptr);
int			ft_isint(long long i);
int			ft_isdigit(int i);
int			ft_strcmp(const char *s1, const char *s2);
// ERROR_HANDLING.C
int			error_type(int arglen, char **args);
int			error_duplicate(int arglen, char **args);
int			error_check(int arglen, char **args);
t_stack		*one_arg_handle(char *arg);
t_stack		*multiple_args_handle(int argc, char **argv);
// STACK_UTILS.C
t_stack		*ft_stacknew(int val);
void		ft_stackadd_front(t_stack **stack, t_stack *new);
void		ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack		*create_stack(int arglen, char **args);
void		print_stack(t_stack *stack);
void		print_stacks(t_stack **a, t_stack **b);
// STACK_UTILS2.C
int			split_len(char **split);
void		free_stack(t_stack *stack);
int			stack_size(t_stack *stack);
bool		stack_is_empty(t_stack *stack);
// SPLIT.C
char		**split_args(char *str);
char		**free_split(char **split, int count);
int			count_args(char *str);
// INSTRUCTIONS.C
void		sa(t_stack **stack_a, bool print);
void		sb(t_stack **stack_b, bool print);
void		ss(t_stack **stack_a, t_stack **stack_b, bool print);
void		pa(t_stack **stack_a, t_stack **stack_b, bool print);
void		pb(t_stack **stack_a, t_stack **stack_b, bool print);
// INSTRUCTIONS2.C
void		ra(t_stack **stack_a, bool print);
void		rb(t_stack **stack_b, bool print);
void		rr(t_stack	**stack_a, t_stack **stack_b, bool print);
void		rra(t_stack **stack_a, bool print);
void		rrb(t_stack **stack_b,bool print);
// INSTRUCTIONS3.C
void		rrr(t_stack **stack_a, t_stack **stack_b, bool print);
// TEST_INSTRUCTIONS.C
void		test_instructions(t_stack **stack_a, t_stack **stack_b);
// CHECK_IF_SORT.C
bool		stack_a_is_sorted(t_stack *stack_a);
// ALGO.C
void		push_first_two_nodes(t_stack **stack_a, t_stack **stack_b, int *max_value, int *min_value);
t_stack		*find_target_node(t_stack *stack_a, t_stack *stack_b);
int			push_cost(int pos_a, int pos_b, int size_a, int size_b);
t_stack		*find_least_cost_node(t_stack *s_a, t_stack *s_b);
void		push_least_cost_node(t_stack **s_a, t_stack **s_b);
// ALGO2.C
void		turk_algorithm(t_stack **stack_a, t_stack **stack_b);
void		sort_three(t_stack **stack);
t_stack		*find_target_stack_a(t_stack *stack_a, int value);
int			get_position(t_stack *stack, t_stack *node);
void		push_back_stack_a(t_stack **stack_a, t_stack **stack_b);
// ALGO3.C
t_stack		*find_smallest(t_stack *stack);
void		put_smallest_top(t_stack **stack_a);

#endif