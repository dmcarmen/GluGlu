/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:31:11 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 22:18:08 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
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
char			*ft_str_one_with_n_zeros(int zeros);
void			ft_print_value(t_list *dict, int nbr);
void			ft_cardinal_numbers(t_list *dict, char *str);
void			ft_free_cardinal_list(t_cardinal *list);
t_cardinal		*ft_create_cardinal_node(char *value);
t_cardinal		*ft_process_group(t_list *d, char *str, int dig, int th);
t_list			*list_ini(void);
void			list_free(t_list *l);
int				list_insert_last(t_list *l, char *nb, char *nbwr);
void			list_extract_first(t_list *l);
int				list_is_empty(const t_list *l);
char			*list_get_nbwr(const t_list *l, char *nb);
void			list_print(t_list *l);

#endif
