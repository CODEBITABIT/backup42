/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:13:12 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 18:48:55 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if (!s1)
		return (NULL);
	dst = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[k])
	{
		dst[j++] = s1[k++];
	}
	k = 0;
	while (s2[k])
	{
		dst[j++] = s2[k++];
	}
	dst[j] = '\0';
	return (dst);
}
