/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:13:34 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/12 12:29:12 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*int	main()
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "World";
	printf("Comparaison de str1 avec str2: %d\n", ft_memcmp(str1, str2, 5));
	printf("Comparaison de str1 avec str3: %d\n", ft_memcmp(str1, str3, 5));
	return (0);
}*/