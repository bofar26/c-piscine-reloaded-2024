/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:42:25 by mipang            #+#    #+#             */
/*   Updated: 2024/09/25 00:01:24 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str ++;
	}
	return (count);
}
/*
void  ft_putchar(int a)
{
        char    c;

        if (a >= 10)
        {
                ft_putchar(a / 10);
        }
                c = a % 10 + '0';
                write(1, &c, 1);
}

int	main(void)
{
	char str[] = "123";
	ft_putchar(ft_strlen(str));

	return (0);
}*/
