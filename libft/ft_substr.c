#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = ft_calloc((len + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (new_str);
	while (len-- > 0)
		new_str[i++] = s[start++];
	return (new_str);
}
