/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:00 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/21 19:07:48 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
   char cadena[] = "Erase una vez...";
   char *puntero;
   char *puntero2;

   puntero = (char *)memchr( cadena, 'u', 8);
   printf( "%s\n", cadena);
   printf( "%s\n", puntero ); 
   printf( "--------------------------------------\n"); 
   puntero2 = (char *)ft_memchr(cadena, 'u', 8);
   printf( "%s\n", puntero2); 

   return 0;
}*/
