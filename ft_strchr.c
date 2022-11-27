/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:07:48 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/27 10:07:48 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (((char *)s)[++i])
		if (((char *)s)[i] == (char) c)
			return ((char *)s + i);
	return (NULL);
}
