/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:40:55 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/17 18:02:43 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int a = 1;

	if (nb <= 0)
		return (0);

	while (a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		if (a > 46340)
			return (0);
		a++;
	}
	return (0);
}

int main ()
{

      	int test_cases[] = {0, 1, 4, 9, 16, 25, 50, 2147395600, -4, 2147483647};
	int i;

	for (i = 0; i < 10; i++)
	{
		int nb = test_cases[i];
		int result = ft_sqrt(nb);
		printf("ft_sqrt(%d) = %d\n", nb, result);
	}

	return (0);
}
