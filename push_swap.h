/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2025/01/13 16:54:26 by sbehar           ###   ########.fr       */
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

typedef struct stack
{
	int				value;
	struct stack	*next;
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
// LISTS_UTILS.C
t_stack		*ft_lstnew(int val);
void		ft_lstadd_front(t_stack **stack, t_stack *new);
void		ft_lstadd_back(t_stack **stack, t_stack *new);
t_stack		*create_list(int arglen, char **args);
void		print_stack(t_stack *stack);
void		print_stacks(t_stack **a, t_stack **b);
// LISTS_UTILS2.C
int			split_len(char **split);
void		free_stack(t_stack *stack);
// SPLIT.C
char		**split_args(char *str);
char		**free_split(char **split, int count);
int			count_args(char *str);
// INSTRUCTIONS.C
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
// INSTRUCTIONS2.C
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack	**stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
// INSTRUCTIONS3.C
void		rrr(t_stack **stack_a, t_stack **stack_b);
// TEST_INSTRUCTIONS.C
void		test_instructions(t_stack **stack_a, t_stack **stack_b);

#endif