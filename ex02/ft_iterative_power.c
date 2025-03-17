/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:18:17 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/17 16:29:41 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result = 1;

	if (power < 0)
		return 0;

	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return result;
	
}




int main()
{
	printf("2^3= %d\n", ft_iterative_power(2, 3));
	printf("5^0= %d\n", ft_iterative_power(5, 0));
	printf("3^-2= %d\n", ft_iterative_power(3, -2));
	printf("-2^2= %d\n", ft_iterative_power(-2, 2));
	printf("-2^3= %d\n", ft_iterative_power(-2, 3));
}
