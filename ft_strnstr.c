/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:46:47 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:09:52 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	c = ft_strlen(to_find);
	while (str[a])
	{
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b] && to_find[b] && a + b < n)
				b++;
			if (b == c)
				return ((char *)&str[a]);
			else
				b = 0;
		}
		a++;
	}
	if (to_find[0] == '\0')
		return ((char *)&str[0]);
	return (0);
}
