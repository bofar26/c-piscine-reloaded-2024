/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:42:23 by mipang            #+#    #+#             */
/*   Updated: 2024/09/24 20:57:01 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
void	ft_putchar(int num)
{
	char	c;

	if (num >= 10)
	{
		ft_putchar(num / 10);
	}
	c = num % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 99;
	ft_ft(&i);
	ft_putchar(i);
	return (0);
}*/
