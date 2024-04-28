/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:36 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:25:21 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr2s;
	unsigned char		cc;
	size_t				i;

	i = 0;
	cc = (unsigned char)c;
	ptr2s = (unsigned char *)s;
	while ((i < n))
	{
		if (ptr2s[i] == cc)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char strtest[] = "Hola Marvin";
	char *ptrresult;
	char *ptrresult2;
	char searchitem = 'u';
	size_t searchlen = 8;

	ptrresult = memchr(strtest, searchitem, searchlen);
	ptrresult2 = ft_memchr(strtest, searchitem, searchlen);
	printf("resultado original %s\n", ptrresult);
	printf("resultado mio      %s\n", ptrresult2);
	return (0);
}*/