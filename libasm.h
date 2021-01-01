#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, void *buf, size_t nbyte);

#endif