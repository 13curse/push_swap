/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:03:37 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
//# include "./libft/libft.h"

/* cc -Wall -Wextra -Werror error_handling.c instructions.c instructions2.c
lists_utils.c lists_utils2.c split.c utils.c main.c */

typedef struct stack {
	int value;
	struct stack * next;
} stack_t;

// UTILS.C
int		ft_strlen(char *s);
long long	ft_atoi(const char *nptr);
int		ft_isint(long long i);
int		ft_isdigit(int i);
int		ft_strcmp(const char *s1, const char *s2);
// ERROR_HANDLING.C
int		error_type(int arglen, char **args);
int		error_duplicate(int arglen, char **args);
int		error_check(int arglen, char **args);
// LISTS_UTILS.C
stack_t	*ft_lstnew(int val);
void	ft_lstadd_front(stack_t **stack, stack_t *new);
void	ft_lstadd_back(stack_t **stack, stack_t *new);
stack_t	*create_list(int arglen, char **args);
void	print_stack(stack_t *stack);
void	print_stacks(stack_t **a, stack_t **b);
// LISTS_UTILS2.C
int		split_len(char **split);
void	free_stack(stack_t *stack);
// SPLIT.C
char	**split_args(char *str);
char	**free_split(char **split, int count);
int		count_args(char *str);
// INSTRUCTIONS.C
void	sa(stack_t **stack_a);
void	sb(stack_t **stack_b);
void	ss(stack_t **stack_a, stack_t **stack_b);
void	pa(stack_t **stack_a, stack_t **stack_b);
void	pb(stack_t **stack_a, stack_t **stack_b);
// INSTRUCTIONS2.C
void	ra(stack_t **stack_a);
void	rb(stack_t **stack_b);
void	rr(stack_t	**stack_a, stack_t **stack_b);
void	rra(stack_t **stack_a);
void	rrb(stack_t **stack_b);
// INSTRUCTIONS3.C
void	rrr(stack_t **stack_a, stack_t **stack_b);
// TEST_INSTRUCTIONS.C
void	test_instructions(stack_t **stack_a, stack_t **stack_b);

#endif