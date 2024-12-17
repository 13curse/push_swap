/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:07 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/18 10:54:45 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_init(int n, long *num, int *len, int *sign)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	*num = n;
	*len = 0;
	*sign = 1;
	if (n <= 0)
	{
		*len = 1;
		if (n < 0)
		{
			*sign = -1;
			*num = -(*num);
		}
	}
	return (NULL);
}

void	ft_itoa_calc_len(int n, int *len)
{
	while (n != 0)
	{
		n /= 10;
		(*len)++;
	}
}

char	*ft_itoa_alloc(int len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

void	ft_itoa_convert(long num, char *str, int len, int sign)
{
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		sign;

	str = ft_itoa_init(n, &num, &len, &sign);
	if (str != NULL)
		return (str);
	ft_itoa_calc_len(n, &len);
	str = ft_itoa_alloc(len);
	if (!str)
		return (NULL);
	ft_itoa_convert(num, str, len, sign);
	return (str);
}
/* int	main()
{
	int	num = 42;
	char	*str = ft_itoa(num);
	printf("ft_itoa(%d) = %s\n", num, str);
	free(str);
	return (0);
} */