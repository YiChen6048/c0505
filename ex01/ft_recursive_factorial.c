/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:20:15 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/17 15:42:00 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

/*int main()
{
	printf("5! = %d\n", ft_recursive_factorial(5));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("-3! = %d\n", ft_recursive_factorial(-3));
	printf("10! = %d\n", ft_recursive_factorial(10));
	return (0);
}*/
