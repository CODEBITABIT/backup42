/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:51 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:31:35 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*saux;

	if (len != 0)
	{
		i = 0;
		saux = (unsigned char *)b;
		while (i < len)
		{
			*(char *)saux = (unsigned char)c;
			saux++;
			i++;
		}
	}
	return (b);
}
/*int	main(void)
{
	char string1[] = "hola Marvin";
	char string2[] = "hola Marvin";
	char value = '+';
	int length = 4;

	memset(string1, value, length);
	ft_memset(string2, value, length);
	printf("resultado original \"%s\"\n", string1);
	printf("resultado mio      \"%s\"\n", string2);
	return (0);
}*/