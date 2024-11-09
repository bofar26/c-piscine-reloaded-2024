/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:35:19 by mipang            #+#    #+#             */
/*   Updated: 2024/11/06 23:35:31 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			count ++;
		i ++;
	}
	return (count);
}
/*
#include <stdio.h>

int is_a(char *str) {
    while (*str) {
        if (*str == 'a')
            return 1;
        str++;
    }
    return 0;
}

int	main(void) 
{
    char *tab[] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "kiwi",
        NULL
    };

    int count = ft_count_if(tab, is_a);
    printf("Number of strings containing 'a': %d\n", count);

    return 0;
}
*/
