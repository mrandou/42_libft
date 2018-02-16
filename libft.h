/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:09:09 by mrandou           #+#    #+#             */
/*   Updated: 2018/02/16 15:10:37 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIBFT_H
# define __FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr(const char *str);
void			ft_putstr_fd(const char *str, int fd);
void			ft_puttab(char **tab);
void			ft_putendl(const char *str);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putbn();
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strstr(const char *s1, const char *find);
char			*ft_strnstr(const char *s1, const char *find, size_t delim);
char			*ft_strncat(char *s1, const char *s2, size_t delim);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strchr(const char *str, int oc);
char			*ft_strrchr(const char *str, int oc);
char			*ft_strboc(char *str, int oc);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnew(size_t size);
char			*ft_itoa(int nb);
char			*ft_strrev(char *str);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strrec(char const *s, unsigned int start, unsigned int end);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_one_word(char *str, char c, int one);
int				ft_nblen(int nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_countword(char const *str, char c);
int				ft_atoi(const char *str);
size_t			ft_strlcat(char *dst, const char *src, size_t max);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t nb);
void			*ft_memchr(const void *s, int oc, size_t n);
void			*ft_memcpy(void *s, const void *s2, size_t n);
void			*ft_memccpy(void *s, const void *s2, int c, size_t n);
void			*ft_memmove(void *s, const void *s2, size_t n);
void			*ft_memalloc(size_t mem);
void			ft_memdel(void **ap);
void			ft_strdel(char **ap);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *newlist);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_putlst(t_list *list);
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstrev(t_list *lst, t_list *prev);

#endif
