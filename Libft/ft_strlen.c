/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:40:08 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 16:35:39 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	int resultado;
	int resultadoft;
	char valor[] = "hola Marvin";

	resultado = strlen(valor);
	resultadoft = ft_strlen(valor);
	printf("resultado original \"%d\"\n", resultado);
	printf("resultado mio      \"%d\"\n", resultadoft);
	return (0);
}*/