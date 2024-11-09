/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:55:22 by mipang            #+#    #+#             */
/*   Updated: 2024/11/07 19:00:11 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	n;
	int		i;

	i = 0;
	n = '\n';
	while (str[i])
	{
		ft_putchar(str[i]);
		i ++;
	}
	ft_putchar(n);
}

void	ft_swap(char **s1, char **s2)
{
	char	*change;

	change = *s1;
	*s1 = *s2;
	*s2 = change;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_bubble(char **str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{	
		j = 0;
		while (j < len - 1 - i)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{	
				ft_swap(&str[j], &str[j + 1]);
			}
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_bubble(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i ++;
	}
	return (0);
}
