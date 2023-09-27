/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:35:10 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 18:56:06 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) src)[i] = 0;
		i++;
	}
}