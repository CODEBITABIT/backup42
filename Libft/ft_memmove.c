/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:31:26 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:25:51 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr2dst;
	const unsigned char	*ptr2src;

	if (!dst && !src)
		return (0);
	i = 0;
	ptr2dst = (unsigned char *)dst;
	ptr2src = (unsigned char *)src;
	while ((i < len))
	{
		if (ptr2src < ptr2dst)
			ptr2dst[len - 1 - i] = ptr2src[len - 1 - i];
		else
			ptr2dst[i] = ptr2src[i];
		i++;
	}
	return (dst);
}
/*int main (void)
{
	char	strdst1[] = "this is a good nyancat !\r\n";
	char	strdst2[] = "this is a good nyancat !\r\n";
	//char	strsrc1[] = "blanco";
	//char	strsrc2[] = "blanco";
	int value;

	value = 12;
	memmove(strdst1, strdst1, value);
	ft_memmove(strdst2, strdst2, value);
	printf("resultado original \"%s\"\n", strdst1);
	printf("resultado mio      \"%s\"\n", strdst2);
	return (0);
}*/