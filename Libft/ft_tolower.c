/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:23 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:37:26 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c > 64) && (c < 91))
		c = c + 32;
	return (c);
}
/*int main(void)
{
	char strtest[] = "Hola";
	int i = 0;

	while (i < 6)
	{
		printf(" %c", ft_tolower(strtest[i]));
		i++;
	}
}*/
