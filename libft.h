/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:42:40 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:11:25 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);

void	ft_bzero(void *src, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isalnum(int i);

int		ft_isalpha(int i);

int		ft_isascii(int i);

int		ft_isdigit(int i);

int		ft_isprint(int c);

char	*ft_itoa(int n);

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);

void	*ft_memcpy(void *dest, void *src, int n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *pointer, int value, size_t count);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *str, int search);

char	*ft_strdup(const char *src);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strncmp(char const *first, char const *second, size_t length);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *str, int search);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif
