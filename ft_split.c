/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:08:27 by xavier            #+#    #+#             */
/*   Updated: 2023/06/03 20:33:06 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

static int  count_c(char const *s, char c)
{
        int i;
        int flag;

        i = 0;
        flag = 1;
        while (s[i] != '\0')
        {
            if(s[i] == c)
                flag++;
            i++;
        }
        return (flag);
}

char    **ft_split(char const *s, char c)
{
        int len;
        char *res;
        len = count_c(s,c);
        res = malloc(len + 1);
        if (res == NULL)
            return (NULL);
	printf("len: %d\n", len);
	}

int main()
{
        char s1[] = "living la vida, loca";
        char c;
        char **s;

        c = 'a';
        s = ft_split(s1, c);
        return (0);
}
