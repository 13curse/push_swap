/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:36:53 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/14 14:43:46 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (*src != '\0')
	{
		*dest = *src;
		return (ft_strncpy(dest + 1, src + 1, n - 1));
	}
	else
	{
		while (n > 0)
		{
			*dest++ = '\0';
			n--;
		}
	}
	return (dest);
}

static int	to_trim(const char *set, char c)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*empty_result;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1);
	while (to_trim(set, s1[start]) && start < end)
		start++;
	while (to_trim(set, s1[end - 1]) && end > start)
		end--;
	if (start == end)
	{
		empty_result = malloc(1);
		if (empty_result)
			empty_result[0] = '\0';
		return (empty_result);
	}
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return ((void *)0);
	ft_strncpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}

/* int	main()
{
	char	*test = "!!!Hello World!!!!";
	char	*set = "!";
	char	*result = ft_strtrim(test, set);
	printf("Test : '%s' => '%s'\n", test, result);
	free(result);
	return (0);
} */