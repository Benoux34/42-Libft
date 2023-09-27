/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:38:17 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 18:59:39 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	char	*s1;
	char	*s2;
	size_t	a;

	if (pointer1 != NULL || pointer2 != NULL)
	{
		s1 = (char *)pointer1;
		s2 = (char *)pointer2;
		a = 0;
		while (a < size)
		{
			if ((unsigned int)s1[a] > (unsigned int)s2[a])
				return (1);
			else if ((unsigned int)s1[a] < (unsigned int)s2[a])
				return (-1);
			else
				a++;
		}
	}
	return (0);
}
