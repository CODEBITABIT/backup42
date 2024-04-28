/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:02 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:35:06 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;

	lendst = 0;
	lensrc = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= dstsize)
		lendst = dstsize;
	if (lendst == dstsize)
		return (lendst + lensrc);
	if (lensrc < dstsize - lendst)
		ft_memcpy(dst + lendst, src, lensrc + 1);
	else
	{
		ft_memcpy(dst + lendst, src, dstsize - lendst - 1);
		dst[dstsize - 1] = '\0';
	}
	return (lendst + lensrc);
}
/*int	main(void)
{
	char strdst1[] = "Hola caracola";
	char strdst2[] = "Hola caracola";
	char strsrc1[] = "Marvin";
	size_t newlen;
	size_t newlenft;
	int value;

	value = 0;
	newlen = 0;
	newlenft = 0;
	newlen = strlcat(strdst1, strsrc1, value);
	newlenft = ft_strlcat(strdst2, strsrc1, value);
	printf("resultado original \"%zu \"\n", newlen);
	printf("resultado mio      \"%zu \"\n", newlenft);
	printf("cadena resultante orig %s \n", strdst1);
	printf("cadena resultante mio  %s \n", strdst2);
	return (0);
}*/