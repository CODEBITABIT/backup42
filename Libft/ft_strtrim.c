/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:12:08 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/06 20:44:40 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getinipos(const char *subs1, const char *subset)
{
	size_t	i;
	size_t	j;
	size_t	subpos;
	int		find;

	i = 0;
	subpos = 0;
	while (subs1[i] != '\0')
	{
		j = 0;
		find = 0;
		while (subset[j] != '\0')
		{
			if (subs1[i] == subset[j])
				find = 1;
			j++;
		}
		if (!find)
			return (i);
		i++;
	}
	return (0);
}

static size_t	ft_getendpos(const char *subs1, const char *subset)
{
	size_t	i;
	size_t	j;
	size_t	subpos;

	subpos = ft_strlen(subs1);
	i = subpos - 1;
	j = 0;
	while (i >= 0)
	{
		while (subset[j] != '\0')
		{
			if (subs1[i] == subset[j])
				subpos = i;
			j++;
		}
		if (subpos == i + 1)
			return (subpos);
		j = 0;
		i--;
	}
	return (subpos);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inipos;
	size_t	endpos;
	size_t	i;
	char	*trims1;

	if (!s1 || !set)
		return (NULL);
	if (!*set || !*s1)
		return (ft_strdup(s1));
	inipos = 0;
	inipos = ft_getinipos(s1, set);
	endpos = ft_getendpos(s1, set);
	if (inipos >= endpos)
		return (ft_strdup(""));
	trims1 = ft_calloc((endpos - inipos + 1), sizeof(char));
	if (!trims1)
		return (NULL);
	i = 0;
	while (i < (endpos - inipos))
	{
		trims1[i] = s1[i + inipos];
		i++;
	}
	trims1[i] = '\0';
	return (trims1);
}

/*int main()
{
	char longchain[] = "caHola Marvincacacaca";
	char shortchain[] = "caca";
	char *newchain;

	newchain = ft_strtrim(longchain, shortchain);
	printf ("resultado %s\n", newchain);
	printf ( "longitud %zu\n", ft_strlen(newchain));
}*/
