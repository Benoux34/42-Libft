/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benantun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:31:51 by benantun          #+#    #+#             */
/*   Updated: 2022/11/13 21:43:36 by benantun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_nb_sep(char const *s, char c)
{
        int     a;
        int     sep;
        int     d;

        a = 0;
        sep = 0;
        d = 0;
        while (s[a])
        {
                if (s[a] != c && s[a + 1] == c)
                        sep++;
                a++;
        }
        while (s[a - 1] != c)
        {
                if (s[a] == c)
                        d = 0;
                else
                        d = 2;
                a--;
        }
        if (d == 2)
                sep++;
        return (sep);
}

void    ft_str_write(const char *str, char const *s, char c)
{
        int             a;
        char    *string;

        a = 0;
        string = (char *)str;
        while (s[a] != c && s[a] != '\0')
        {
                string[a] = s[a];
                a++;
        }
        string[a] = '\0';
}

int     ft_skip(char const *s, int a, int c)
{
        int     b;
        b = 0;
        while (s[a] == c)
                a++;
        b = a;
        return (b);
}

int     ft_str_print(char **str, char const *s, char c)
{
        int     a;
        int     b;
        int     sep;

        a = -1;
        b = 0;
        sep = 0;
        while (s[a++])
        {
                if (s[a] == c)
                {
                        str[sep] = (char *) malloc (sizeof(char) + (a - b));
                        ft_str_write(str[sep], s + b, c);
                        sep++;
                        b = a + 1;
                }
                if (s[a] == c && s[a + 1] == c)
                {
                        b = ft_skip(s, a, c);
                        a = b;
                }
        }
        str[sep] = (char *) malloc (sizeof(char) + (a - b));
        ft_str_write(str[sep], s + b, c);
        return (0);
}

char    **ft_split(char const *s, char c)
{
        char    **str;
        int             sep;
        int             a;

        a = 0;
        while (s[a] == c)
                a++;
        sep = ft_nb_sep(s, c);
        str = (char **) malloc (sizeof(char) * (sep + 1));
        if (!str)
                return (0);
        str[sep] = NULL;
        if (ft_str_print(str, s + a, c) == 0)
                return (str);
        return (NULL);
}
