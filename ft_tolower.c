/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:17:51 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/27 18:12:51 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		c = c + 32;
	return (c);
}
/*void ft_separe(char *s)
{
	int j;
	int len;

	j = 0;
	len = ft_strlen(s);
	while (j < len)
	{
		s[j] = ft_tolower(s[j]);
		j++;
	}
	printf("%s", s);
	printf(" ");
}

int main(int argv, char *argc[])
{	
	int i;

	i = 1;
	while (i < argv)
	{
		ft_separe(argc[i]);
		i++;
	}
	printf("\n");
}*/
