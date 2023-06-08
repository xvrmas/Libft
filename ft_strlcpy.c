/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:14:42 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 14:35:10 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*int main()
{
	char str[10] = "abcdefghij";
	char dest[10] = "1234567890";
	char str2[10] = "abcdefghij";
	char dest2[10] = "1234567890";
	size_t i;

	i = 3;
	strlcpy(dest, str, i);
	printf("str: %s\n", str);
	printf("dest: %s\n", dest);
	printf("<------------------------->\n");
	ft_strlcpy(dest2 , str2, i);
	printf("str: %s\n", str2);
	printf("str: %s\n", dest2);
	
}*/
