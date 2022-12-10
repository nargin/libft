/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:55:18 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/10 11:57:49 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;
	size_t	i;

	if (!s)
		return (NULL);
	n = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!n)
		return (0);
	while (s[start] && i < len)
		n[i++] = s[start++];
	n[i] = 0;
	return (n);
}
