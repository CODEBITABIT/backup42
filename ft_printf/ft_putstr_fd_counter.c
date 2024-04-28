/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_counter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:31:33 by sergimar          #+#    #+#             */
/*   Updated: 2024/04/22 20:33:51 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_fd_counter(char *str, int fd, int *total)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		(*total) += write(fd, &str[i], 1);
		i++;		
	}
}

/*int main()
{
	char mensaje[] = "Hola, mundo!";
	int file_descriptor = 1; // En este ejemplo,
		usamos stdout como el descriptor de archivo

	ft_putstr_fd(mensaje, file_descriptor);
	return (0);
}*/
