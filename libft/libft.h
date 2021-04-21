#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_bzero(void *s1, size_t nmb);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);

void	*ft_memchr(void* src, int c, size_t nmb);
int 	ft_memcmp(const void *src, const void *src2, size_t nmb);
void	*ft_memcpy(void *_NC_RESTRICT, const void *_NC_RESTRICT, size_t);
void	*ft_memccpy(void *dest, const void *src, int c, size_t nmb);
void	*ft_memmove(void* dest, const void* src, size_t nmb);
void	*ft_memset(void *s1, int c, size_t nmb);

char	*ft_strchr(const char *, int);
int		ft_strcmp(const char *, const char *);
size_t	ft_strlen(char *str)
int		ft_strncmp(const char *first, const char *second, size_t nmb);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strrchr(const char *, int);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*strrchr(const char *s, int c);

int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*strlcat (char *dest, const char *src, size_t size);
char	*ft_substr(char const *str, unsigned int start, size_t len);

char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif
