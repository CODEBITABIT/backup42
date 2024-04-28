/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:31:14 by sergimar          #+#    #+#             */
/*   Updated: 2024/04/22 21:19:35 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd_counter(char c, int *total)
{
	(*total) += write(1, &c, 1);	
}

void	ft_putnbr_fd_base(long long int n, int base, int *total,int touper)
{
	char	*dict = "0123456789abcdef";
	char	*dict_up = "0123456789ABCDEF";
	
	if (n < 0)
	{
		if (base != 16)
			(*total)+= write(1, "-", 1);
		n *= -1;
	}
	if (n >= base)
		ft_putnbr_fd_base(n / base, base, total, touper);
	if (touper == 0) 
		ft_putchar_fd_counter(dict[n % base], total);
	else if(touper ==1)
		ft_putchar_fd_counter(dict_up[n % base], total);
}

int	main(void)
{
	int mensaje = -2147483647;
	int total = 0;
	int base = 16;
	
	ft_putnbr_fd_base(mensaje, base, &total, 1);
	printf("\n%X(funcion original)\n", mensaje);
	printf("\n\ncaracteres impresos %i\n",total);
	return (0);
}