/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 07:01:42 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/27 14:04:51 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[4];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0];
		while (num[1] <= '8')
		{
			num[2] = num[1];
			while (num[2] <= '9')
			{
				if ((num[0] < num[1]) && (num[1] < num[2]))
				{
					write (1, &num, 3);
					if ((num[0] != '7' || num[1] != '8') || num[2] != '9')
						write(1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
