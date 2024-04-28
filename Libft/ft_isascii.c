/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:36:58 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 15:55:45 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}
/*int main()
{
	int resultado;
	int resultadoft;
	int valor;
	char valor2;

	valor = 128;
	valor2 = 127;
	resultado = isascii(valor);
	resultadoft = ft_isascii(valor);

	printf("resultado original \"%d\".\n", resultado);
	printf("resultado mio \"%d\".\n", resultadoft);
	return (0);
}*/
