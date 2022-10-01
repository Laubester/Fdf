#include "../includes/fdf.h"

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
		free(table[i++]);
}
