/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:02:02 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/27 10:16:03 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
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
		s[j] = ft_toupper(s[j]);
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
