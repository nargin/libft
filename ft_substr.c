/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:55:18 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/11 21:56:18 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		n = malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		n = malloc((len + 1) * sizeof(char));
	if (!n)
		return (0);
	i = 0;
	while (s[start] && i < len)
		n[i++] = s[start++];
	n[i] = 0;
	return (n);
}
