/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:16 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:36:36 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	j;

	pos = 0;
	if (!needle[pos])
		return ((char *)haystack);
	while (pos < len && haystack[pos])
	{
		j = 0;
		if (needle[j] == haystack[pos + j])
		{
			while ((haystack[pos + j] == needle[j]) && (needle[j] != '\0')
				&& (pos + j < len))
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (NULL);
}
/*int main() {
	char cadena[] = "Hola, ¿como estás?";
	char cadena2[] = "Hola, ¿como estás?";
	char subcadena[] = "co";
	char *resultado = strnstr(cadena, subcadena, 10);
	char *resultadoft = ft_strnstr(cadena2, subcadena, 10);


		printf("resultado original \"%s\".\n", resultado);
		printf("resultado mio \"%s\".\n", resultadoft);

	return (0);
}*/