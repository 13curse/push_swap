/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:37:04 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/15 09:37:04 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char separator)
{
	return (c == separator);
}

static int	count_words(const char *str, char separator)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_separator(*str, separator) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_separator(*str, separator))
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*copy_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return ((void *)0);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_free_split(char **split, int count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
	return ((void *)0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		end;

	if (!s)
		return ((void *)0);
	result = (char **)ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!result)
		return ((void *)0);
	i = -1;
	start = 0;
	while (++i < count_words(s, c))
	{
		while (is_separator(s[start], c))
			start++;
		end = start;
		while (s[end] && !is_separator(s[end], c))
			end++;
		result[i] = copy_word(s, start, end);
		if (!result[i])
			return (ft_free_split(result, i));
		start = end;
	}
	return (result);
}

/*int	main()
{
	char	*str = "Il, s'agit, d'un, test";
	char	**result;
	int	i;

	result = ft_split(str, ',');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("'%s'\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("Erreur d'allocation mémoire.\n");
	return (0);
}*/