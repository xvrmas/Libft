/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:12:51 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 13:56:10 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*s3;

	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc((total_len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
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
