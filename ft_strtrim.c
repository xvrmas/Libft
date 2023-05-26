/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:08:34 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/26 18:56:29 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int    i;
    int    found;

    i = 0;
    found = 0;
    printf("entrada str--> %s\n", str);
    printf("entrada c--> %c\n", c);
    while (found == 0 && ((char *)str)[i] != '\0')
    {
        if (str[i] == (char)c)
        {
            return ((char *)&str[i]);
            found = 1;
        }
        i++;
    }
    if ((char)c == '\0')
        return ((char *)&str[i]);
        printf("salida--> %s\n", str);
    return (NULL);
}
char *ft_strtrim(char const *s1, char const *set)
{
        size_t i;
        char *s3;
        size_t len;
        int found;

        i  = 0;
        found = 0;
        len = strlen(s1);
        s3 = ft_strchr(s1, *set);
        printf("-->%s\n", s3);
        return (s3);
}
int main()
{
        char s1[] = "42 Barcelona";
        char set[] = "e";
        char *s3;

        s3 = ft_strtrim(s1, set);
        printf("return s3-->%s\n", s3);
        return (0);
}
