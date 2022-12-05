/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:19:34 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/03 13:15:40 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if ((!big || !little) && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		k = 0;
		while (little[k] == big[i + k] && i + k < len)
			if (!little[k++ + 1])
				return ((char *)big + i);
		i++;
	}
	return (0);
}
