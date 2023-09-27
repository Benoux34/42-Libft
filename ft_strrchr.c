/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:17:39 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:10:09 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	a;

	a = ft_strlen(str);
	while ((char)search != str[a] && a > 0)
		a--;
	if ((char)search == str[a])
		return ((char *)&str[a]);
	else
		return (0);
}
