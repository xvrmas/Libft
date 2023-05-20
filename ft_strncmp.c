/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:15:14 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/19 18:00:31 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 1;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && *str1 - *str2 == 0 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}

/*int main()
{
	char s1[] = "Barcel";
	char s2[] = "Barcelona";
	size_t n;
	int res;
	int res2;

	n = 6;
	res = ft_strncmp(s1, s2 , n);
	printf("ft_strcmp: %d\n", res);
	res2 = strncmp(s1, s2, n);
	printf("strcmp: %d", res2);
	
}*/
