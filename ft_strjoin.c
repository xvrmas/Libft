/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:50:15 by xavier            #+#    #+#             */
/*   Updated: 2023/05/26 13:00:47 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{i
        size_t		s1len;
        size_t		s2len;
        size_t		total_len;
        size_t		i;
        size_t		j;
	char		*s3;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
        s2len = ft_strlen(s2);
        total_len = s1len + s2len;
	s3 = malloc((total_len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i < s1len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < total_len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[total_len] = '\0';
	return (s3);
}

/*int main()
{
        char s1[] = "Caminante no hay camino,";
        char s2[] =  " se hace camino al andar.";
        char *s3;

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
        s3 = ft_strjoin(s1,s2);
	printf("s3: %s\n", s3);
}*/
