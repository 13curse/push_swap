/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/18 13:26:53 by sbehar           ###   ########.fr       */
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
int		ft_atoi(const char *nptr);
// ERROR_HANDLING.C
int		error_type(int argc, char **argv);
int		error_duplicate(int argc, char **argv);
// CREATE_LIST.C
node_t	*ft_lstnew(int val);
void	ft_lstadd_front(node_t **stack, node_t *new);
void	ft_lstadd_back(node_t **stack, node_t *new);
void	print_stack(node_t *stack);
// SPLIT.C
char	**split_args(char *str);

#endif