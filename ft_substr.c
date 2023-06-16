/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:47:43 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/13 12:00:20 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	size_t	slen;

	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (j < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int main()
{
	char s[] = "42 Barcelona";
	unsigned int start;
	size_t len;
	char *res;

	start = 3;
	len = 9;
	res = ft_substr(s, start, len);
	printf("%s\n", res);
}*/
