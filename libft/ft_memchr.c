#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*big;
	size_t		len;

	len = 0;
	big = (const char *)s;
	while (len < n)
	{
		if ((unsigned char)big[len] == (unsigned char)c)
			return ((void *)&big[len]);
		len++;
	}
	return (NULL);
}
