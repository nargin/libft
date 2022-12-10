/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:25:16 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/10 11:36:52 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*nx;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	nx = malloc((len + 1) * sizeof(char));
	if (!nx)
		return (0);
	i = 0;
	k = 0;
	while (s1[k] && i < len)
		nx[i++] = s1[k++];
	k = 0;
	while (s2[k] && i < len)
		nx[i++] = s2[k++];
	nx[i] = 0;
	return (nx);
}
