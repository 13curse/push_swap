/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:03:01 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/13 11:03:01 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return ((void *)0);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main()
{
	const char	*original = "Bonjour";
	char	*copie = ft_strdup(original);

	if (copie)
	{
		printf("Original : %s\n", original);
		printf("Copie	 : %s\n", copie);
		free(copie);
	}
	else
		printf("L'allocation a échoué.\n");
	return (0);
}*/
