/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:23 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:49 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	if(str == (void *)0)
		return(0);
	while(str[len] != '\0')
		len++;
	return(len);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int	main()
{
	char	src[] = "Hello World !";
	char	dest[20];

	ft_memcpy(dest, src, ft_strlen(src) + 1);

	printf("Source : %s\n", src);
	printf("Destination après ft_memcpy : %s\n", dest);

	if (ft_strcmp(src, dest) == 0)
		printf("Test réussi\n");
	else
		printf("Test échoué\n");
	return (0);
}*/
