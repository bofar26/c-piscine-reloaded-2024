/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:38:34 by mipang            #+#    #+#             */
/*   Updated: 2024/11/08 21:51:29 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	read_and_output(char *str);

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac < 2)
		{
			write(2, "File name missing.\n", 19);
			return (1);
		}
		else
		{
			write(2, "Too many arguments.\n", 20);
			return (1);
		}
	}
	read_and_output(av[1]);
	return (0);
}

void	read_and_output(char *str)
{
	char	output;
	int		open_value;
	int		read_value;

	open_value = open(str, O_RDONLY);
	if (open_value == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	read_value = read(open_value, &output, 1);
	while (read_value > 0)
	{
		write(1, &output, 1);
		read_value = read(open_value, &output, 1);
	}
	close(open_value);
}
