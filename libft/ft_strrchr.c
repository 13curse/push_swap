/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:18:50 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/12 10:37:35 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = ((void *)0);
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return ((char *) last);
}

/*int	main()
{
	printf("%s\n", ft_strrchr("oleler", 'e'));
	return (0);
}*/
