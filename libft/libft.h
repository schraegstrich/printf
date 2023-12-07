/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:33:37 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/29 13:50:45 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, int len);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strlen(const char *str);
int		ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(const char *str1);
char	*ft_strchr(const char *str, int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *str, int c, int len);
void	*ft_memmove(void *dst, const void *src, int n);
void	*ft_memcpy(void *dst, const void *src, int n);
int		ft_memcmp(const void *str1, const void *str2, int n);
void	*ft_memchr(const void *str, int c, int n);
int		ft_isprint(int c);
int		ft_isdigit(int n);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int n);
void	ft_bzero(void *str, int n);
int		ft_atoi(const char *str);
void	*ft_calloc(int count, int size);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f) (void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
