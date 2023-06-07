/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:17:18 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/30 19:39:59 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	len;
	char	*str;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main() {
  
  char str[] = "Barcelona";
  char str2[] = "Barcelona";
  char *s1;
  char *s2;

  s1 = strdup(str);
  printf("strdup: %s\n", s1);
  printf("-------------------------------\n");
  s2 = ft_strdup(str2);
  printf("ft_strdup: %s\n", s2);

  return 0;
}*/
