/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:38:54 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 15:56:29 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
/*int main()
{
	int resultado;
	int resultadoft;
	int valor;

	valor = 127;
	resultado = isprint(valor);
	resultadoft = ft_isprint(valor);

	printf("resultado original \"%d\".\n", resultado);
	printf("resultado mio \"%d\".\n", resultadoft);
	return (0);
}*/