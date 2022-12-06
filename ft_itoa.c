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
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nx;
	int	i;
	long	nn;

	nn = n;
	nx = malloc(mem_c(nn) * sizeof(char));
	if (!nx)
		return (0);
	i = mem_c(nn);
	nx[--i] = 0;
	if (nn < 0)
	{
		nn = -nn;
		nx[0] = '-'; 
	}
	while (nn > 0)
	{
		nx[--i] = (nn % 10) + 48;
		nn /= 10;
	}
	return (nx);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2999));
}*/
