/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:32 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/14 11:07:22 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;

	p = s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*p = value;
		p++;
		n--;
	}
	return (s);
}

// int main()
// {
//     char str[] = "Hello";
//     printf("Before memset:\n");
//     printf("str: %s\n", str);
//     ft_memset(str, '*', 5);
//     printf("After memset:\n");
//     printf("str: %s\n", str);
//     return (0);
// }
