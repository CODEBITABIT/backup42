/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:50:07 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/27 13:36:45 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	letra;

	i = 48;
	while (i < 58)
	{
		letra = (char)i;
		write(1, &letra, 1);
		i = i + 1;
	}
}
