/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:12 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:36:23 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (!s1[i])
			return (-1);
		if (!s2[i])
			return (1);
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	int result1;
	int result2;
	char strtest1[] = "teste";
	char strtest2[] = "tesstex";

	result1 = strncmp(strtest1, strtest2, 10);
	result2 = ft_strncmp(strtest1, strtest2, 10);
	printf("resultado original %d \n", result1);
	printf("resultado mio      %d \n", result2);
}*/
