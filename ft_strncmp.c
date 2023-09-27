/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:33:45 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:09:36 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	a;

	a = 0;
	while ((first[a] != '\0' || second[a] != '\0') && a < length)
	{
		if ((unsigned int)first[a] > (unsigned int)second[a])
			return (1);
		else if ((unsigned int)first[a] < (unsigned int)second[a])
			return (-1);
		a++;
	}
	return (0);
}
