/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:43:37 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/03 13:49:52 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;

	i = ft_strlen(s);
	d = malloc((i + 1) * sizeof(char));
	i = -1;
	if (d)
	{
		while (s[++i])
			d[i] = s[i];
		d[i] = 0;
	}
	return (d);
}
