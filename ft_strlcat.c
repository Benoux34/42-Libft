/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:13 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:08:35 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	all;

	a = ft_strlen(dst);
	b = 0;
	all = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	if (size > 0)
	{
		while (src[b] && a < size - 1)
		{
			dst[a] = src[b];
			a++;
			b++;
		}
		dst[a] = '\0';
	}
	return (all);
}
