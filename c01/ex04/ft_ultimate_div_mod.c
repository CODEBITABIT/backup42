/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:21:32 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/29 20:21:53 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*b = *a / *b;
}
/*
int	main(void)
{
	int x;
	int	y;
	int *puntx;
	int *punty;

	x = 9;
	y = 3;
	puntx = &x;
	punty = &y;
	ft_ultimate_div_mod(puntx, punty);


}*/