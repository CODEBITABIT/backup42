/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:39:54 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:33:01 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	int		i;

	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (cc == s[i])
		return ((char *) &s[i]);
	return (NULL);
}
/*int	main(void)
{
	char strtest[] = "Hola Marvin";
	char strtest2[] = "Hola Marvin";
	char *ptrresult;
	char *ptrresult2;
	char searchitem = 'M';

	ptrresult = strchr(strtest, searchitem);
	ptrresult2 = ft_strchr(strtest2, searchitem);
	printf("resultado original %s\n", ptrresult);
	printf("resultado mio      %s\n", ptrresult2);
	return (0);
}*/