/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:01:27 by mipang            #+#    #+#             */
/*   Updated: 2024/10/07 18:12:44 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb && i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i ++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("the root of 16:%d\n", ft_sqrt(16));
	printf("the root of 0 :%d\n", ft_sqrt(0));
	printf("the root of 1 :%d\n", ft_sqrt(1));
	printf("the root of 7 :%d\n", ft_sqrt(7));
	return (0);
}*/
