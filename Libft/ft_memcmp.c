/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:40 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:25:28 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr2s1;
	unsigned char	*ptr2s2;
	size_t			i;

	i = 0;
	ptr2s1 = (unsigned char *)s1;
	ptr2s2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((unsigned char)ptr2s1[i] != (unsigned char)ptr2s2[i])
			return (ptr2s1[i] - ptr2s2[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	int result1;
	int result2;
	char strtest1[] = "Holoa";
	char strtest2[] = "Hola";

	result1 = memcmp(strtest1, strtest2, 5);
	result2 = ft_memcmp(strtest1, strtest2, 5);
	printf("resultado original %d \n", result1);
	printf("resultado mio      %d \n", result2);
	return (0);
}*/
