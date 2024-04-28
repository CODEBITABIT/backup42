/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 21:00:49 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:25:35 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr2dst;
	const unsigned char	*ptr2src;

	if (!dst && !src)
		return (0);
	i = 0;
	ptr2dst = (unsigned char *)dst;
	ptr2src = (const unsigned char *)src;
	while (i < len)
	{
		*ptr2dst = *ptr2src;
		ptr2dst++;
		ptr2src++;
		i++;
	}
	return (dst);
}
/*int main (void)
{
	char	strdst1[] = "Hola Marvin";
	char	strdst2[] = "Hola Marvin";
	//char	strsrc1[] = "blanco";
	//char	strsrc2[] = "blanco";
	int value;

	value = 5;
	memcpy(strdst1, strdst1, value);
	ft_memcpy(strdst2, strdst2, value);
	printf("resultado original \"%s\"\n", strdst1);
	printf("resultado mio      \"%s\"\n", strdst2);
	return (0);
}*/