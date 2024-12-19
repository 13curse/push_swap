/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbehar <sbehar@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:05:12 by sbehar            #+#    #+#             */
/*   Updated: 2024/12/19 13:58:45 by sbehar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isint(long long i)
{
	if (i < INT_MIN || i > INT_MAX)
		return (-1);
	return (0);
}

/* int main() 
{
    long long test_values[] = {INT_MIN, INT_MAX, (long long)INT_MIN - 1, (long long)INT_MAX + 1, 0};
    int num_values = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < num_values; i++) {
        int result = ft_isint(test_values[i]);
        if (result == -1) {
            printf("%lld est hors de la plage des entiers\n", test_values[i]);
        } else {
            printf("%lld est dans la plage des entiers\n", test_values[i]);
        }
    }
    return 0;
} */