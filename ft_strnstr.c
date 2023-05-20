/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:29:53 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/19 20:02:50 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

 /*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
}*/

int main()
{
   char s1[13] = "Hola a todos";
   char s2[3] = "la";
   size_t len;

   len = 4;
   printf( "s1:      %s\n", s1 );
   printf( "s2:      %s\n", s2 );
   printf( "strnstr: %s\n", strnstr( s1, s2, len ));

   return 0;
}

