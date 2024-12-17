/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:44:31 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/12 12:12:53 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return ((void *)0);
}

/*int	main()
{
	char	str[] = "Hello";
	char	*result =  ft_memchr(str, 'H', 5);

	if (result)
		printf("Trouvé à la position: %ld\n", result - str);
	else
		printf("Caractère non trouvé\n");
	return (0);
}*/