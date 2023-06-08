/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:02:16 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 14:21:26 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (*src != '\0' && i < (dstsize - 1))
	{
		*(dst + i++) = *src++;
	}
	*(dst + i) = '\0';
	return (dst_len + src_len);
}

/*int main()
{
	char src[20] = " barcelona ";
	char dst[20] = "42";
	char res;
	int dstsize;
	
	dstsize = 60;
	//res = strlcat(dst, src, dstsize);
	//printf("%d", res);
	ft_strlcat(dst, src , dstsize);
	printf("%s", dst);
}*/
