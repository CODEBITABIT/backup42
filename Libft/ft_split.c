/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergimar <sergimar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:02:45 by sergimar          #+#    #+#             */
/*   Updated: 2024/03/24 14:15:28 by sergimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_word(char const *str, char c)
{
	int	flagc;
	int	wlen;

	flagc = 0;
	wlen = 0;
	while (*str)
	{
		if (*str != c && flagc == 0)
		{
			flagc = 1;
			wlen++;
		}
		else if (*str == c)
			flagc = 0;
		str++;
	}
	return (wlen);
}

static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static void	ft_init_var(size_t *i, int *j, int *isword)
{
	*i = -1;
	*j = 0;
	*isword = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		j;
	int		isword;

	if (!s)
		return (NULL);
	ft_init_var(&i, &j, &isword);
	split = ft_calloc((ft_cnt_word(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && isword < 0)
			isword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && isword >= 0)
		{
			split[j] = ft_fill_word(s, isword, i);
			if (!split[j])
				return (ft_free(split, j));
			isword = -1;
			j++;
		}
	}
	return (split);
}

/*int	main(void)
{
	char const	*s;
	char		c;
	char		**result;
	int			i;

	s = "hello/world/test";
	c = '/';
	i = 0;
	result = ft_split(s, c);
	if (result)
	{
		while (result[i])
		{
			printf("%s\n", result[i]);
			free(result[i]); // Liberar memoria para cada subcadena
			i++;
		}
		free(result); // Liberar memoria para el array de punteros
	}
	return (0);
}*/
