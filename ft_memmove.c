/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:18:00 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/14 21:08:01 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!len || dst == src)
		return (dst);
	while (len--)
	{
		d[len] = s[len];
	}
	return (d);
}
/*int main()
{
  char c1[20] = "abcdefghij";
  char dest[10] = "ABCDEFGHIJ";
  char c2[20] = "abcdefghij";
  char dest2[10] = "ABCDEFGHIJ";
  
  memmove(dest, c1, 5);
  printf("origen memmove: %s\n", c1);
  printf("desti  memmove: %s\n", dest);
  printf("-------------------------\n");
  ft_memmove(dest2, c2, 5);
  printf("origen ft_memmove: %s\n", c2);
  printf("desti  ft_memmove: %s\n", dest2);

}*/
