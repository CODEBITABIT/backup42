/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:05 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:35:21 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t				lensrc;
	unsigned char		*ptr2dst;
	const unsigned char	*ptr2src;

	lensrc = 0;
	ptr2dst = (unsigned char *)dst;
	ptr2src = (const unsigned char *)src;
	while (ptr2src[lensrc] != '\0')
		lensrc++;
	if (lensrc + 1 <= dstsize)
	{
		ft_memcpy(ptr2dst, ptr2src, lensrc);
		ptr2dst[lensrc] = '\0';
	}
	else if (dstsize != 0)
	{
		ft_memcpy(ptr2dst, ptr2src, dstsize - 1);
		ptr2dst[dstsize - 1] = '\0';
	}
	return (lensrc);
}
/*int	main(void)
{
	size_t resultadoft;
	size_t resultado;
	size_t valuenum;
	char strsrc[] = "hola";
	char strdst[] = "abcdefghijk";
	char strdst2[] = "abcdefghijk";

	valuenum = 5;
	resultado = strlcpy(strdst2, strsrc, valuenum);
	resultadoft = ft_strlcpy(strdst, strsrc, valuenum);
	printf("resultado original \"%zu\"\n", resultado);
	printf("resultado mio      \"%zu\"\n", resultadoft);
	printf("cadena resultante %s\n", strdst);
	printf("cadena resultante %s\n", strdst2);
	return (0);
}*/