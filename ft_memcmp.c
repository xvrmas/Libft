/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:48:57 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 16:24:04 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*int main()
{
	char s1[] = "abcde\nfghi";
	char s2[] = "abcdefghi";

	size_t	n;
	int res;
	int res2;
	
	n = 9;
	res = memcmp(s1, s2, n);
	printf("memcmp   : %d\n", res );
	printf("----------------------------\n");
	res2 = ft_memcmp(s1, s2, n);
	printf("ft_memcmp: %d\n", res2 );
}*/
