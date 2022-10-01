#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		gnl_strlen(const char *s);
char	*gnl_strjoin(char **s1, char *s2);
void	*gnl_calloc(int count, int size);
char	*gnl_strchr(const char *s, int c);
int		gnl_free_it(char **str, int bytes);

#endif
