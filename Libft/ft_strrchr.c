/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:19 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:36:53 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		lens;
	char	cc;
	char	*ptr2s;

	i = 0;
	lens = 0;
	cc = (char)c;
	ptr2s = (char *)s;
	while (ptr2s[lens] != '\0')
		lens++;
	while (lens - i >= 0)
	{
		if (ptr2s[lens - i] == cc)
			return (ptr2s + lens - i);
		i++;
	}
	if (c == '\0')
		return (ptr2s + lens);
	else
		return (NULL);
}
/*int	main(void)
{
	char strtest[] = "Hola Marvin";
	char strtest2[] = "Hola Marvin";
	char *ptrresult;
	char *ptrresult2;
	char searchitem = '\0';

	ptrresult = strchr(strtest, searchitem);
	ptrresult2 = ft_strrchr(strtest2, searchitem);
	printf("resultado original %s\n", ptrresult);
	printf("resultado mio      %s\n", ptrresult2);
	return (0);
}*/