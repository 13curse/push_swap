/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:04 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:41:06 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
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
	char	test_chars[] = {'A', 'z', '5', '!', 'M', 'p', '0', ' '};
	int	i;

	ft_putstr("Test de ft_isdigit:\n");
	i = 0;
	while (i < 8)
	{
		ft_putchar(test_chars[i]);
		ft_putstr(": ");
			if (ft_isdigit(test_chars[i]))
				ft_putstr("C'est un chiffre\n");
			else
				ft_putstr("Ce n'est pas un chiffre\n");
		i++;
	}
	return (0);
}*/
