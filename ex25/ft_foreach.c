/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:22:10 by mipang            #+#    #+#             */
/*   Updated: 2024/11/06 23:22:24 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i ++;
	}
}
/*
#include <unistd.h>
void	ft_putnbr(int nb)
{	
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10 + '0');
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	int	length = 4;

	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
*/
