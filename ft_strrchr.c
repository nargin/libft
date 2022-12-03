/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:34:49 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/02 15:29:27 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*occ;

	if (!c)
		return (((char *)s) + ft_strlen(s));
	i = -1;
	occ = 0;
	while (((char *)s)[++i])
		if (((char *)s)[i] == (char) c)
			occ = ((char *)s) + i;
	return (occ);
}
