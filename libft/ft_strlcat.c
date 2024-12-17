/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:39 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:44 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main()
{
	printf("%zu\n", ft_strlcat("Hello", "World", 3));
	return (0);
}*/