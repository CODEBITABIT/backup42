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

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div1;
	int	mod1;
	int *div;
	int *mod;

	div1 = 1;
	mod1 = 1;
	div = &div1;
	mod = &mod1;
	ft_div_mod(10 ,3 ,div , mod);

}*/