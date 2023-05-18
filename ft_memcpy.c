/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:50:24 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/14 18:47:25 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned char		*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (src == dest || !n)
	{
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
  char c1[20] = "ABCDEFGHI";
  char dest[20] = "abcdefghi";
  
  memcpy(dest, c1, 5);
  ft_memcpy(dest, c1, 5);
  printf("origen memcpy: %s\n", c1);
  printf("Desti memcpy: %s\n", dest);
  printf("------------------------\n");
  printf("origen ft_memcpy: %s\n", c1);
  printf("desti ft_memcpy: %s\n", dest);
  
}*/
