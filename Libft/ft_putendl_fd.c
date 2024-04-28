/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:31:03 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 18:40:44 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*int main()
{
	char mensaje[] = "Hola, mundo!";
	int file_descriptor = 1; // En este ejemplo,
		usamos stdout como el descriptor de archivo

	ft_putendl_fd(mensaje, file_descriptor);
	return (0);
}*/