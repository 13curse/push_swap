/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:34:55 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:40:56 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}

/*void	ft_putchar(char c)
{
	    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	    while (*str)
		            ft_putchar(*str++);
}

void	ft_putnbr(int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	test_and_print(int value)
{
	ft_putstr("ft_isascii(");
	ft_putnbr(value);
	ft_putstr(") = ");
	ft_putnbr(ft_isascii(value));
	ft_putchar('\n');
}

int	main()
{
	ft_putstr("Test de ft_isascii:\n");
	
	test_and_print(-1);
	test_and_print(0);
	test_and_print(32);
	test_and_print(127);
	test_and_print(128);
	test_and_print(255);

	return(0);
}*/
