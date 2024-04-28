/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:36:33 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/13 15:55:15 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int resultado;
	int resultadoft;
	int valor;

	valor = 65;
	resultado = isalnum(valor);
	resultadoft = ft_isalnum(valor);

	printf("resultado original \"%d\".\n", resultado);
	printf("resultado mio \"%d\".\n", resultadoft);
	return (0);
}*/