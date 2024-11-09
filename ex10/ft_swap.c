/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:34:42 by mipang            #+#    #+#             */
/*   Updated: 2024/09/24 23:28:07 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
void    ft_putchar(int num)
{
        char    c;

        if (num >= 10)
        {
                ft_putchar(num / 10);
        }
        c = num % 10 + '0';
        write(1, &c, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	write(1,"before", 6);
	ft_putchar(a);
	write(1, ",", 1);
	ft_putchar(b);
	write(1, ".", 2);
	ft_swap(&a, &b);
	write(1, "after", 5);
	ft_putchar(a);
	write(1, ",", 1);
	ft_putchar(b);
	write(1, ".", 2);
	return (0);
}*/
