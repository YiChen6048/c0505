/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:54:00 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/17 15:10:50 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return 0;

	int result = 1;

	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return result;
}


int main(void)
{
	int test_values[] = {5, 0, -3, 1, 10};
	int num_tests = sizeof(test_values) / sizeof(test_values[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int nb = test_values[i];
		int result = ft_iterative_factorial(nb);
		printf("ft_iterative_factorial(%d) = %d\n", nb, result);

	}
	return 0;
}
