/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:49:21 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/12 12:26:21 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*hihi(const char	*str, int start, int end)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *) malloc(((end - start) + 1) * sizeof(char));
	while (start < end)
		cp[i++] = str[start++];
	cp[i] = 0;
	return (cp);
}

static int	ft_count(const char *str, char sep)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		start = i;
		while (str[i] != sep && str[i])
			i++;
		if (start != i)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	tab = (char **) malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			tab[j++] = hihi(s, start, i);
	}
	tab[j] = 0;
	return (tab);
}
