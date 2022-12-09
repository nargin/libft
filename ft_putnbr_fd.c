/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rxonrgn <rxonrgn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:52:30 by rxonrgn           #+#    #+#             */
/*   Updated: 2022/12/09 21:51:40 by rxonrgn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	number[10];

	i = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0) 
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		n = -n;
	}
	while (n > 0)
	{
		number[i++] = n % 10;
		n /= 10;
	}
	while (--i >= 0)
		ft_putchar_fd(('0' + number[i]), fd);

