/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:52:45 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/06 15:38:34 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mem_c(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0 || i == 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nx;
	int		i;
	long	nn;

	nn = n;
	nx = malloc(mem_c(nn) * sizeof(char));
	if (!nx)
		return (0);
	i = mem_c(nn);
	nx[--i] = 0;
	if (nn < 0)
		nn = -nn;
	while (i >= 0)
	{
		nx[--i] = (nn % 10) + 48;
		nn /= 10;
		if (i == 0 && n < 0)
			nx[i] = '-';
	}
	return (nx);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483647 - 1));
	return (0);
}*/
