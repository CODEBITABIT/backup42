/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:40:12 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:37:12 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < (start + len))
		len = ft_strlen(s) - start;
	dst = (char *)malloc(len + 1 * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*int	main(void)
{
	char strtest[]= "Hola Marvin";
	char resultado = ft_substr(strtest, 5,6);

	printf("resultado %s", resultado);
	return(0);
}*/