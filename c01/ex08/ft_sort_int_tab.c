/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:21:32 by sergimar          #+#    #+#             */
/*   Updated: 2024/04/28 23:15:35 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	pos;
	int	avance;
	int	aux;

	i = 0;
	pos = 0;
	while (i < (size - 1))
	{
		while (pos < (size - 1))
		{
			avance = pos + 1;
			if (tab[pos] > tab[avance])
			{
				aux = tab[pos];
				tab[pos] = tab[avance];
				tab[avance] = aux;
			}
			pos ++;
		}
		pos = 0;
		i ++;
	}
}

/*int main(void)
{
	int arr[5];
	int *ptr;
	int i;
	int j;

	i = 0;
	j = 20;
	while (i < 5)
	{
		arr[i] = j;
		i++;
		j--;
	}
	ptr = arr;
	ft_sort_int_tab(ptr, 5);
}*/