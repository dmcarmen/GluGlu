/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:31:11 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:12:12 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_cardinal_list
{
	char					*name;
	struct s_cardinal_list	*next;
}				t_cardinal;

typedef struct	s_node_list
{
	char				*nb;
	char				*nbwr;
	struct s_node_list	*next;
}				t_node_list;

typedef struct	s_list
{
	t_node_list	*node;
}				t_list;

void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcpy(char *dst, char *src);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
char			*ft_itoa(int nbr);
int				ft_is_numeric(char c);
int				ft_is_printable(char c);
void			ft_trim_spaces(char *c);
char			*ft_str_one_with_n_zeros(int zeros);
char			*ft_get_buffer(int size, char *buffer);
t_cardinal		*ft_cardinal_numbers(t_list *dict, char *str);
t_cardinal		*ft_add_cardinal_node(t_cardinal *list, char *value);
void			ft_free_cardinal_list(t_cardinal *list);
void			ft_print_cardinal_list(t_cardinal *list);
t_list			*list_ini(void);
void			list_free(t_list *l);
int				list_insert_last(t_list *l, char *nb, char *nbwr);
int				list_is_empty(const t_list *l);
char			*list_get_nbwr(const t_list *l, char *nb);
t_node_list		*list_get_node(const t_list *l, char *nb);
int				ft_validate_number(char *nbr);
int				ft_load_dictionary(t_list *dict, char *filename);
int				ft_validate_line(char *line);
void			ft_create_key_value(t_list *dict, char *line);

#endif
