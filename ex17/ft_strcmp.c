/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:13:01 by mipang            #+#    #+#             */
/*   Updated: 2024/09/30 20:15:11 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	n ++;
	}
	return (s1[n] - s2[n]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "okcompute";
	char	s2[] = "okcomputer";

	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
