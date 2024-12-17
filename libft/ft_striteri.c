/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:14:24 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/19 14:13:54 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	func(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main()
{
	char	str[] = "12345";

	ft_striteri(str, func);
	printf("s: %s\n", str);
	return (0);
} */