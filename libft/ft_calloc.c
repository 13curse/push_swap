/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:10:43 by sbehar            #+#    #+#             */
/*   Updated: 2024/11/14 11:22:16 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb >= 65535 && size >= 65535) || nmemb * size >= 65535)
		return ((void *)0);
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*int	main()
{
	int	*int_array;
	size_t	num_ints = 5;

	int_array = (int *)ft_calloc(num_ints, sizeof(int));
	if (int_array == (void *)0)
	{
		printf("Echec de l'allocation\n");
		return (1);
	}
	if (int_array[0] == 0 && int_array[1] == 0 
		&& int_array[2] == 0 && int_array[3] == 0 && int_array[4] == 0)
		printf("Test réussi : Tous les éléments sont initialisés à zéro.\n");
	else
		printf("Test échoué : Les éléments ne se sont pas initialisés à 0.\n");
	free(int_array);
	return (0);
}*/