/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 01:41:51 by mipang            #+#    #+#             */
/*   Updated: 2024/11/08 18:17:21 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 12)
		return (0);
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(3));
	return (0);
}*/
