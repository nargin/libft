/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <romaurel@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:12:32 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/07 19:53:21 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;

	i = ft_strlen(s);
	n = malloc((i + 1) * sizeof(char));
	if (!n)
		return (0);
	i = -1;
	while (s[++i])
		n[i] = (*f)((unsigned int) i, s[i]);
	n[i] = 0;
	return (n);
}
