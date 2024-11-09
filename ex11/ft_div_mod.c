/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:22:15 by mipang            #+#    #+#             */
/*   Updated: 2024/09/25 00:17:48 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(-10, 9, &div, &mod);
	printf ("%d", div);
	printf ("%d", mod);
	return (0);
}*/
