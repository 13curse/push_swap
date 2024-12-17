/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:30:49 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/11 17:40:49 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}

/*void	ft_putstr(const char *str)
{
	    while (*str)
		            write(1, str++, 1);
}

void	ft_putnbr(int n)
{
	if(n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if(n >= 10)
		ft_putnbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

void	print_memory(void *ptr, size_t size) 
// La fonction affiche la mémoire pour que 
// l'on puisse comparer avant/après utilisation de ft_bzero. 
{
	unsigned char *p = ptr;
	size_t i = 0;

	while(i < size)
	{
		ft_putnbr(p[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main()
{
	char	str[20] = "Hello, World!";

	ft_putstr("Avant ft_bzero : ");
	print_memory(str, sizeof(str));

	ft_bzero(str, 5); // Mets à zéro les 5 premiers octets

	ft_putstr("Après ft_bzero(str, 5) : ");
	print_memory(str, sizeof(str));

	int	numbers[5] = {1, 2, 3, 4, 5};

	ft_putstr("Avant ft_bzero (tableau d'entiers) : ");
	print_memory(numbers, sizeof(numbers));

	ft_bzero(numbers, sizeof(int) * 3); // Mets à zéro les 3 premiers entiers
	
	ft_putstr("Après ft_bzero(numbers, sizeof(int) * 3) : ");
	print_memory(numbers, sizeof(numbers));

	return(0);
}*/
