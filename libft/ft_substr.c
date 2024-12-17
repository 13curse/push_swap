/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:17:26 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/13 14:17:26 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	s2_len;
	char	*s2;

	if (!s)
		return ((void *)0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		s2_len = s_len - start;
	else
		s2_len = len;
	s2 = malloc(s2_len + 1);
	if (!s2)
		return ((void *)0);
	ft_strncpy(s2, s + start, s2_len);
	s2[s2_len] = '\0';
	return (s2);
}

/* int	main()
{
	const char *str = "Hello, World!";
	unsigned int	start = 8;
	size_t	len = 5;

	char	*s2 = ft_substr(str, start, len);
	if (s2 != (void *)0)
	{
		printf("Sous-chaîne : %s\n", s2);
		free(s2);
	}
	else
		printf("Échec de l'allocation de mémoire\n");
	return (0);
} */ 