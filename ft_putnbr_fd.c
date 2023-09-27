/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:46:27 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:06:45 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_length(int nb)
{
	int	a;

	a = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		a = a * 10;
	}
	return (a);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	length;

	length = ft_length(n);
	if (n != -2147483648)
	{
		if (n / length < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		while (length != 0)
		{
			ft_putchar_fd(n / length + '0', fd);
			n = n % length;
			length = length / 10;
		}
	}
	else
		write(fd, "-2147483648", 11);
}
