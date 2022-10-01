#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
