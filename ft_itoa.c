/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:52:45 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/09 23:04:57 by rxonrgn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mem_c(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10 && ++i)
		n /= 10;
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*nx;
	int		i;
	long	nn;

	nn = n;
	i = mem_c(nn);
	nx = malloc((i + 1) * sizeof(char));
	if (!nx)
		return (0);
	nx[i--] = '\0';
	if (nn < 0)
		nn = -nn;
	while (i >= 0)
	{
		nx[i--] = (nn % 10) + 48;
		nn /= 10;
	}
	if (n < 0)
		nx[0] = '-';
	return (nx);
}
