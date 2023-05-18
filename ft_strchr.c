/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:05:27 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/14 17:02:20 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (found == 0 && ((char *)str)[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
			found = 1;
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*int main()
{
    char c1[] = "Text a. copiar";
    //char c = 'T';
    printf("ft_strch: %s\n",ft_strchr(c1, 344));
    printf("strch: %s\n", strchr(c1, 97));

}*/
