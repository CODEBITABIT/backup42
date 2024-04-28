/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:37:03 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 15:55:53 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int main()
{
	int resultado;
	int resultadoft;
	char valor;

	valor = 'b';
	resultado = isdigit(valor);
	resultadoft = ft_isdigit(valor);

	printf("resultado original \"%d\".\n", resultado);
	printf("resultado mio \"%d\".\n", resultadoft);
	return (0);
}*/
