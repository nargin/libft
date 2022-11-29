#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!c)
		return (((char *)s) + i);
	while (--i)
		if (((char *)s)[i] == (char) c)
			return (((char *)s) + i);
	return (((char *)s) + ft_strlen(s));
}
