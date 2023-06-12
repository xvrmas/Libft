/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:00:16 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/12 23:41:03 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*static char ft_toUpper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
}
static char ft_toLower(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char s[] = "42 Paris, 42 Barcelona, 42 Roma, 42 Londres";
	printf("Original: %s\n", s);
	char *str2 = ft_strmapi(s, ft_toUpper);
	printf("toupper:  %s\n",str2);
	char *str3 = ft_strmapi(str2, ft_toLower);
	printf("tolower:  %s\n", str3);
	return (0);
}*/
