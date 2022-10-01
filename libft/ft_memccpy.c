#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (n > 0)
	{
		*b = *a;
		if (*b == (unsigned char)c)
			return ((void *)b + 1);
		a++;
		b++;
		n--;
	}
	return (NULL);
}
