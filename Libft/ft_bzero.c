/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:36:25 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/09 14:24:28 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*saux;

	if (n != 0)
	{
		i = 0;
		saux = (unsigned char *)s;
		while (i < n)
		{
			*saux = '\0';
			saux++;
			i++;
		}
	}
}
/*int	main(void)
{
	char string1[] = "hola Marvin";
	char string2[] = "hola Marvin";
	size_t length = 5;
	int len1;
	int len2;

	len1 = strlen(string1);
	len2 = strlen(string2);
	bzero(string1, length);
	ft_bzero(string2, length);
	printf("resultado original: %s %d", string1, len1);
	printf("resultado      mio: %s %d", string2, len2);
	return (0);
}*/