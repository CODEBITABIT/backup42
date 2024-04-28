/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:14:58 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:37:39 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		c = c - 32;
	return (c);
}
/*int main(void)
{
	char strtest[] = "Hola";
	int i = 0;

	while (i < 5)
	{
		printf(" %c", ft_toupper(strtest[i]));
		i++;
	}
}*/