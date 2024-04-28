/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:15:29 by sergimar          #+#    #+#             */
/*   Updated: 2024/04/22 20:45:43 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
int ft_data_format(char *type, va_list args, int *total)
{
			if (type == 'c')
				ft_putchar_fd_counter(va_arg(args, char), 1, total);
			else if (type == 's')
				ft_putstr_fd_counter(va_arg(args, char *) , total);
			else if (type == 'p')
				ft_putnbr_fd_base(va_arg(args, unsigned long), 1, 16, total);
			else if (type== 'd')
				ft_putnbr_fd_base(va_arg(args, int), 1, 10, total);				
			else if (type== 'i')
				ft_putnbr_fd_base(va_arg(args, int), 1, 10, total);
			else if (type == 'u')
			
			else if (type == 'x')
				ft_putnbr_fd_base(va_arg(args, unsigned long), 1, 16, total);
			else if (type == 'X')
			else if (type == '%')
				ft_putchar_fd_counter(type,1, total);
			else
				
	
}
int	ft_printf(char const *str, ...)
{
	int i;
	int total;
	va_list	args; //	cspdiuxX%
	
	i = 0;
	total = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_data_format(str[i], args, &total);
		}	
		else
		{
			ft_putchar_fd_counter(str[i],1);
			i++;
			total++;
		}		
	}
	va_end (args);	
}
