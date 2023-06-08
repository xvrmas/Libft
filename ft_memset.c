/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:27:52 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 16:25:31 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = b;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*int main()
{
	 char str[20] = "42 Barcelona";
     char str2[20] = "42 Barcelona";
     //strcpy(str,"This is string.h library function");
     //puts(str);
     memset(str,'$',7);
     ft_memset(str2, '@', 7);
     printf("memset:   %s\n",str);
     printf("ft_memset:%s\n",str2);
     return(0);
}*/
