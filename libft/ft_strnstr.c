#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (len - i <= 0)
				return (NULL);
			i++;
			if (needle[i] == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
