/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:19:16 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/14 10:32:18 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(len1 + len2 + 1);
	if (s3 == (void *)0)
		return ((void *)0);
	ptr = s3;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (s3);
}

/*int	main()
{
	char	*str1 = "Hello, ";
	char	*str2 = "World !";
	char	*str3 = ft_strjoin(str1, str2);
	if (str3 == (void *)0)
	{	
		fprintf(stderr, "Erreur d'allocation mémoire\n");
		return (1);
	}
	printf("Résultat de la concaténation : %s\n", str3);
	free(str3);
	return (0);
}*/