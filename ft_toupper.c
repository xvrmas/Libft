/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:02:02 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/23 12:59:40 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int main()
{
	char s[] = "ante todo mucha calma";
	int i;

	i = 0;
	printf("%s\n", s);
	while (s[i] != '\0')
	{
		printf("%c", ft_toupper(s[i]));
		i++;
	}
	printf("\n");
}*/
