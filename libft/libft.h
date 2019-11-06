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
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
** str
*/

int				ft_strlen(char *s);
char			*ft_strcpy(char *dst, char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strcmp(char *s1, char *s2);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

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

#endif
