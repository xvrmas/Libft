/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:17:18 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/07/01 11:50:22 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			i;
	char		*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main(int argv, char *argc[])
{
   int i;
   char *s2;

	i = 1;
 	while (i < argv)
	{
  		s2 = ft_strdup(argc[i]);
  		printf("ft_strdup: %s\n", s2);
		i++;
	}
  	return (0);
}*/
