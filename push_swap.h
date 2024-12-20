/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/20 11:25:34 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
//# include "./libft/libft.h"

typedef struct node {
	int data;
	struct node * next;
} node_t;

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
node_t	*ft_lstnew(int val);
void	ft_lstadd_front(node_t **stack, node_t *new);
void	ft_lstadd_back(node_t **stack, node_t *new);
node_t	*create_list(int arglen, char **args);
void	print_stack(node_t *stack);
// LISTS_UTILS2.C
int		split_len(char **split);
// SPLIT.C
char	**split_args(char *str);
char	**free_split(char **split, int count);
int		count_args(char *str);


#endif