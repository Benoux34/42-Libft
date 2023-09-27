/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:12:20 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 18:55:45 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(char *str)
{
	int	a;
	int	count;
	int	negative;

	a = 0;
	count = 0;
	while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
		a++;
	negative = 1;
	if (str[a] == 45 && (str[a++] < 48 || str[a++] > 57))
		negative = -1;
	else if (str[a] == 43)
		a++;
	while (str[a] > 47 && str[a] < 58)
	{
		count = count * 10 + (str[a] - 48);
		a++;
	}
	return (negative * count);
}