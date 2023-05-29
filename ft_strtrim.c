/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:08:34 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/29 20:03:05 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int      ft_lencut(char const *s1, char c)
{
        int	i;

        i = 0;
        while (s1[i])
	{
            if (s1[i] == c)
                return (1);
	    i++;
	}
        return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
        size_t i;
	size_t j;
        size_t len;
	char	*res;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[i] && ft_lencut(set, s1[i]))
		i++;
	while (len > i && ft_lencut(set ,s1[len - 1]))
		len--;
	if (len < i)
		len = i;
	res = malloc((len - i) + 1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}

/*int main()
{
  char s1[] = "42 Barcelona";
  char set[] = "42 ona";
  char *s3;

  s3 = ft_strtrim(s1,set);
  printf("final s3-->  %s\n", s3);
  return (0);
}*/
