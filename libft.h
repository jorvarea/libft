/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:28:49 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/19 20:13:49 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isspace(char c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_islowcase(int c);
int		ft_isupcase(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t n);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *b, size_t size);
void	*ft_calloc(size_t count, size_t size);

#endif
