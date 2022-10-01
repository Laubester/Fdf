#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	c = (unsigned char)c;
	while (len > 0)
	{
		((char *)b)[i] = c;
		i++;
		len--;
	}
	return ((char *)b);
}
