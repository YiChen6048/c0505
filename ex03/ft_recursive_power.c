/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:44:41 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/17 16:53:54 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return nb * ft_recursive_power(nb, power - 1);
}

int main()
{
	printf("2^3= %d\n", ft_recursive_power(2, 3));
	printf("5^0= %d\n", ft_recursive_power(5, 0));
	printf("-2^2= %d\n", ft_recursive_power(-2, 2));
        printf("-2^-2= %d\n", ft_recursive_power(-2, -2));
	return (0);
}
