/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:55:18 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/11 15:07:13 by rxonrgn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;
	size_t	i;

	if (!s)
		return (NULL);
	if (!((char *)s)[start])
		return (ft_strdup(""));
	if (start > len)
		n = malloc((ft_strlen((char *)s + start) + 1) * sizeof(char));
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
