/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:44:11 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:07:40 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	int	a;

	a = 0;
	while ((char)search != str[a] && str[a])
		a++;
	if ((char)search == str[a])
		return ((char *)&str[a]);
	else
		return (0);
}
