#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (*s == c)
		res = (char *)s;
	if (res)
		return (res);
	return (NULL);
}
