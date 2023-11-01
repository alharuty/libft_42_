/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:49:05 by allharut          #+#    #+#             */
/*   Updated: 2023/11/01 11:07:16 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>
# include <xlocale.h>

void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int i);
int			ft_isalpha(int i);
int			ft_isascii(int i);
int			ft_isdigit(int i);
int			ft_isprint(int i);
void		*ft_memset(void *ptr, int value, size_t len);
int			ft_strlen(const char *str);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *str, int character);
char		*ft_strrchr(const char *str, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *dest, const char *src, size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s1, unsigned int start, size_t len);
char		*ft_strcat(char *dest, char *src);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);

#endif
