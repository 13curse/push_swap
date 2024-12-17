/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:30:10 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/17 15:51:17 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"

// UTILS.C
int		ft_strlen(char *s);
// ERROR_HANDLING.C
int	error_type(int argc, char **argv);
int	error_duplicate(int argc, char **argv);
// SPLIT.C
char	**split_args(char *str);

#endif