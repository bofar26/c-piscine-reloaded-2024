/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:33:55 by mipang            #+#    #+#             */
/*   Updated: 2024/10/06 19:49:55 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str ++;
		len ++;
	}
	return (len);
}

char	*ft_strcpy(char *cstr, char *str)
{
	char	*dest;

	dest = cstr;
	while (*str)
	{
		*cstr = *str;
		str ++;
		cstr ++;
	}
	*cstr = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *) malloc (ft_strlen(src) + 1);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "ok computer";

	printf("the string is:%s", ft_strdup(src));
	return (0);
}*/
