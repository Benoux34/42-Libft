/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:52:19 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:10:27 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (set[j])
		{
			if (str[i] == set[j])
				break ;
			else
				j++;
		}
		if (set[j] == '\0')
			return (i);
		else
			j = 0;
		i++;
	}
	return (i);
}

int	ft_end(char const *str, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (i > 0)
	{
		while (set[j])
		{
			if (str[i] == set[j])
				break ;
			else
				j++;
		}
		if (set[j] == '\0')
			return (i);
		else
			j = 0;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		j;
	char	*str;

	i = 0;
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	j = end - start + 2;
	str = (char *)malloc(sizeof(char) * j);
	if (!str)
		return (NULL);
	while (i < j - 1)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}