/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decript_cesar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:55:24 by sergimar          #+#    #+#             */
/*   Updated: 2024/04/28 23:03:08 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_countdim(char const *s2)
{
	unsigned char	*ptr2s;
	int				dim2;

	ptr2s = (unsigned char *)s2;
	dim2 = 0;
	while (*ptr2s != '\0')
	{
		dim2++;
		ptr2s++;
	}
	return (dim2);
}

unsigned char	*decript_cesar(const char *s)
{
	int				dim;
	int				i;
	char			aux;
	unsigned char	*decript;

	dim = 0;
	dim = ft_countdim(s);
	decript = (unsigned char *)malloc((dim + 1) * sizeof(char));
	if (!decript)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			aux = s[i] + 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			aux = s[i] - 13;
		else
			aux = s[i];
		decript[i] = aux;
		i++;
	}
	return (decript);
}

int	main(void)
{
	char			*s = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. pacoSbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny,gurer vf bayl n cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq zrffntrf. Nal nqinagntrq crbcyr pna cynl,yvxr pheerag be sbezre fgnss,				ohg gur cevmr jvyy erznva flzobyvp. Gur uvag sbe guvf svefg cebwrpg vf: Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb";
	unsigned char	*d;
	int				i;

	i = 0;
	d = decript_cesar(s);
	if (!d)
	{
		printf("Error de memoria\n");
		return (1);
	}
	printf("%s\n", d);
	free(d);
	return (0);
}
