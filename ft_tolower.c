/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:17:51 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/23 13:05:57 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		c = c + 32;
	return (c);
}

/*int main()
{	
	char s[] = "ANTE TODO MUCHA calma.";
	int i;

	i = 0;
	printf("%s\n", s);
	while (s[i] != '\0')
	{
		printf("%c", ft_tolower(s[i]));
		i++;
	}
	printf("\n");	
}*/
