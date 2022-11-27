/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 01:03:10 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/27 01:03:10 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	tdest;
	size_t	tsrc;

	tsrc = ft_strlen(src);
	if (size < 1)
		return (tsrc + size);
	tdest = ft_strlen(dst);
	i = tdest;
	j = 0;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = 0;
	if (size < tdest)
		return (tsrc + size);
	return (tdest + tsrc);
}
