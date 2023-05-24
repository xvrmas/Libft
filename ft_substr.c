/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:39:28 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/24 19:11:15 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	j = start;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char s[] = "0123456789";
	unsigned int start;
	size_t len;
	char *res;

	start = 5;
	len = 3;
	res = ft_substr(s, start, len);
	printf("String: %s\n", s);
	printf("Start:  %d\n", start);
	printf("Len:    %ld\n", len);
	printf("--------------------------------\n");
	printf("%s\n", res);
}*/
