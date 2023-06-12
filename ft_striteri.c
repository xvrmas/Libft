/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:15:13 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/12 23:39:01 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*static void  Toupper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*int main()
{
	char s[] = "42 Barcelona";
	printf("original:   %s\n", s);	
	ft_striteri(s, Toupper);
	printf("Majuscules: %s\n", s);
	return (0);
}*/
