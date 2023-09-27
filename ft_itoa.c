/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:39:40 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 18:59:06 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_print(char *str, int n, int a)
{
        int     size;
        int     b;

        size = 0;
        if (n < 0)
        {
                str[size] = 45;
                size++;
                n = n * -1;
        }
        b = 0;
        while (n != 0)
        {
                b = n / a;
                n = n % a;
                str[size] = b + 48;
                size++;
                a = a / 10;
        }
        str[size] = '\0';
        return (str);
}

char    *ft_itoa(int n)
{
        char    *str;
        int             size;
        int             negative;
        int             a;

        size = 0;
        negative = n;
        if (negative < 0)
        {
                size++;
                negative = negative * -1;
        }
        a = 1;
        while (negative != 0)
        {
                size++;
                a = a * 10;
                negative = negative / 10;
        }
        a = a / 10;
        str = (char *) malloc(sizeof(char) * size + 1);
        str = ft_print(str, n, a);
        return (str);
}
