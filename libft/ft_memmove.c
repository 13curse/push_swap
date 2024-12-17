/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:28 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:48 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/*int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    printf("Before memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    ft_memmove(str1, str2, 3);

    printf("After memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}*/
