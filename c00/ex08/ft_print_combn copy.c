/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:51:15 by sergimar          #+#    #+#             */
/*   Updated: 2023/11/21 18:52:43 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	int		n;
	int		p;
	int		v;
	char	imp;

	n = 0;
	p = 1;

	while (nb / p != 0)
	{
		p = p * 10;
		n ++;
	}
	while (n > 0)
	{
		p = p /10;
		v = nb / p;
		imp =(char) v + 48;
		write (1 , &imp , 1);
		nb = nb -(v * p);
		n --;
	}
}
void ft_print_combn(int n)
{
	char	imp;
	int		aux;
	int		p;
	int		numimp;
	int		numfinal;

	p = 1;
	numimp = 1;
	numfinal = 0;
	
	while (n > 0 )
	{
		numfinal = numfinal + (9 * p);
		p = p * 10;
		n --;
	}
	aux = p / 10;
	while (numimp <=numfinal)
	{
		if (numimp / aux == 0)
		{
			write (1,  "0", 1);
			aux = aux / 10;
		}
		else
		{
			ft_putnbr(numimp);
			aux = p /10;
			numimp ++;
			if (numimp <=  numfinal)
			{
				write (1, ", ", 2);
			}
		}
	}
}
int main (void)
{
	ft_print_combn(5);
	return(0);
}
