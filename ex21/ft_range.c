/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:09:56 by mipang            #+#    #+#             */
/*   Updated: 2024/10/06 20:45:05 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*dest;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *) malloc ((max - min) * sizeof(int));
	dest = array;
	while (min < max)
	{
		*array = min;
		array ++;
		min ++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*result;
	int	i;

	result = ft_range(1, 9);
	if (result != NULL)
	{
		i = 0;
        	while (i < 8)
        	{
            		printf("%d ", result[i]);
            		i++;
        	}
        	printf("\n");
		free(result);
	}
	else
	{
		printf("Invalid range\n");
	}
	return (0);
}*/
