/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:41:51 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:05:53 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	char	*str;
	size_t	a;

	if (pointer != NULL)
	{
		str = pointer;
		a = 0;
		while (a < count)
			str[a++] = value;
		return (pointer);
	}
	return (0);
}
