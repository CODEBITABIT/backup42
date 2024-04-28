/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:40:58 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/27 14:12:20 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		d1;
	int		d2;
	char	aux;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 +1;
		while (d2 <= 99)
		{
			aux = (char)d1 / 10 + 48;
			write (1, &aux, 1);
			aux = (char)d1 % 10 + 48;
			write (1, &aux, 1);
			write (1, " ", 1);
			aux = (char)d2 / 10 + 48;
			write (1, &aux, 1);
			aux = (char)d2 % 10 + 48;
			write (1, &aux, 1);
			write (1, ", ", 2);
			d2 ++;
		}
		d1 ++;
	}
}
