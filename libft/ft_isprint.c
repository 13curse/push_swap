/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:11 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:08 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
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
	ft_putstr("ft_isprint(");
	ft_putnbr(value);
	ft_putstr(") = ");
	ft_putnbr(ft_isprint(value));
	ft_putchar('\n');
}

int	main()
{
		ft_putstr("Test de ft_isprint:\n");
		test_and_print(-1);
		test_and_print(0);
		test_and_print(32);
		test_and_print(49);					
		test_and_print(89);
		test_and_print(126);						
		test_and_print(255);

		return(0);
}*/
