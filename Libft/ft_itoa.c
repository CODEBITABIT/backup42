/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:42:28 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/08 16:15:32 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long *nbr, int *sign)
{
	int		count;
	long	nbr2;

	count = 0;
	if (*nbr < 0)
	{
		count++;
		*sign = 1;
		*nbr = *nbr * -1;
	}
	if (*nbr == 0)
		count++;
	nbr2 = *nbr;
	while (nbr2 != 0)
	{
		nbr2 = nbr2 / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		sign;
	char	*result;
	long	nbr;

	i = 0;
	sign = 0;
	nbr = n;
	len = ft_int_len(&nbr, &sign);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = len - 1;
	while (i >= sign)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*int main(void)
{
	char 	*newstr;
	int 	num = 0; //2147483647;

	newstr = ft_itoa(num);
	printf (" cadena de numero %s\n", newstr);
	return(0);
}*/
