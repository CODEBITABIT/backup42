/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:03:47 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/27 14:23:30 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_potencia(int num)
{
	int	lenth1;
	int	pot;

	lenth1 = 0;
	pot = 1;
	while (num > 0)
	{
		num = num / 10;
		if (lenth1 != 0)
			pot = pot * 10;
		lenth1 ++;
	}
	return (pot);
}

int	ft_longitud(int num)
{
	int	lenth2;

	lenth2 = 0;
	while (num > 0)
	{
		num = num / 10;
		lenth2 ++;
	}
	return (lenth2);
}

void	ft_putnbr(int nb)
{
	int		l;
	int		p;
	int		v;
	int		is_negative;
	char	imp;

	if (nb < 0)
	{
		nb = ((nb + 1) * (-1));
		write(1, "-", 1);
		is_negative = 1;
	}
	l = ft_longitud(nb);
	p = ft_potencia(nb);
	while (l > 0)
	{
		v = nb / p;
		if (is_negative == 1 && p == 1)
			v = v + 1;
		imp = (char)(v + 48);
		write (1, &imp, 1);
		nb = nb - (v * p);
		p = p / 10;
		l --;
	}
}
