/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:36:45 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 18:59:25 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (char *)memoryBlock;
	while (a < size)
	{
		if (str[a] == (char)searchedChar)
			return (&str[a]);
		a++;
	}
	return (0);
}
