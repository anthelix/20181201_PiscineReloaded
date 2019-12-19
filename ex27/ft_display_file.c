/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:12:33 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/20 10:32:49 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	while (read(fd, &c, 1))
	{
		write(1, &c, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display(argv[1]);
	return (0);
}
