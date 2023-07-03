/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:30:57 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/07/01 12:18:23 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int main(int argv, char *argc[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argv == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argv)
		{	
			j = ft_strlen(argc[i]);
			printf("String %d te %d caracters.\n",i,j);
			i++;
		}
		printf("\n");
	}
}*/
