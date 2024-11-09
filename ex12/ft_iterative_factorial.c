/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 00:47:06 by mipang            #+#    #+#             */
/*   Updated: 2024/11/08 18:25:26 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb --;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	value;

	value = ft_iterative_factorial(5);
	printf("%d", value);
	return (0);
}*/
