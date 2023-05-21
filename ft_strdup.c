/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:39:53 by xavier            #+#    #+#             */
/*   Updated: 2023/05/21 20:38:26 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


char *ft_strdup(const char *s)
{
 char len;
        char *str;
        int i;
        
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
  
  char str[] = "Hola 42  Barcelona";
  //char str2[] = "Hola Barcelona";
  char *s1;
  char *s2;

  s1 = strdup(str);
  printf("strdup: %s\n", s1);
  printf("-------------------------------\n");
  s2 = ft_strdup(str);
  printf("ft_strdup: %s\n", s2);

  return 0;
}*/
