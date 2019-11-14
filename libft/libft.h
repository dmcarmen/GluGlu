/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:45:04 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 20:26:37 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

/*
** types
*/

int				ft_isdigit(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_isspace(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
** str
*/

int				ft_strlen(const char *s);
char			*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, size_t n);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, char c);

/*
** write
*/

void			ft_putnbr_fd(int nb, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl_fd(char *str, int fd);

/*
** conversion
*/

int				ft_atoi(char *str);
char			*ft_itoa(int n);

/*
** memory
*/ 

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n); //const void
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t nmeb, size_t size);
char	*ft_strdup(char *s);

#endif
