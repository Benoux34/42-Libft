/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:53:19 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 21:12:35 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tab;
	int		a;

	tab = malloc (sizeof(char) * ft_strlen(str) + 1);
	a = 0;
	while (str[a])
	{
		tab[a] = str[a];
		a++;
	}
	tab[a] = '\0';
	return (tab);
}
