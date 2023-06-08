/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:29:53 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 14:30:42 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char s1[13] = "Hola a todos";
	char s2[3] = "la";
	size_t len;
	char *res;
	len = 4; printf( "s1:      %s\n", s1 );
	printf( "s2:      %s\n", s2 );
	//  printf( "strnstr: %s\n", strnstr( s1, s2, len));
	printf( "-----------------------------------------\n");
	res = ft_strnstr(s1, s2, len);
	printf( "s2:      %s\n", res );
	return 0;
}*/
