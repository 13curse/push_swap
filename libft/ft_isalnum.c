/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:34:11 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:40:52 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')
		|| (i >= 48 && i <= 57))
		return (1);
	else
		return (0);
}

/*void ft_putchar(char c)
{
	    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	    while (*str)
		            ft_putchar(*str++);
}

int main()
{
	    char test_chars[] = {'A', 'z', '5', '!', 'M', 'p', '0', ' '};
	        int i;

		ft_putstr("Test de ft_isalnum:\n");

		i = 0;
		while (i < 8)
		{
			ft_putchar(test_chars[i]);
			ft_putstr(": ");
		if (ft_isalnum(test_chars[i]))
			ft_putstr("C'est un caractère alphanumérique\n");
		else
			ft_putstr("Ce n'est pas un caractère alphanumérique\n");
		i++;
		}									
	return (0);
}*/
