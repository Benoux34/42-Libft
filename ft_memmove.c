/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:40:48 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 19:00:09 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        size_t  a;
        char    *str1;
        char    *str2;

        a = 0;
        str1 = (char *) dest;
        str2 = (char *) src;
        if (str1 == str2)
                return (NULL);
        if (str1 < str2)
        {
                while (a < n)
                {
                        str1[a] = str2[a];
                        a++;
                }
        }
        else if (str1 > str2)
        {
                while (n-- > 0)
                        str1[n] = str2[n];
        }
        return (dest);
}