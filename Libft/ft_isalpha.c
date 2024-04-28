/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:33:05 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 15:55:25 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
		return (0);
}
/*int main()
{
	int resultado;
	int resultadoft;
	char valor;

	valor = 'z';
	resultadoft = ft_isalpha(valor);
	resultado = isalpha(valor);

	printf("resultado original \"%d\".\n", resultado);
	printf("resultado mio \"%d\".\n", resultadoft);
	return (0);
}*/
