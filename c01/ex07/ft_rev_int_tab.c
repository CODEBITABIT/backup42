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

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fin;
	int	i;
	int	pos;

	i = 0;
	while (i <= (size / 2))
	{
		inicio = tab[i];
		pos = size - i -1;
		fin = tab[pos];
		tab[i] = fin;
		tab[pos] = inicio;
		i ++;
	}
}

int main(void)
{
	int arr[5];
	int *ptr;
	int i;
	int j;

	i = 0;
	j = 10;
	while (i < 5)
	{
		arr[i] = j;
		i++;
		j++;
	}
	ptr = arr;
	ft_rev_int_tab(ptr, 5);
}