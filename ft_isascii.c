/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:54:31 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/07/03 12:31:37 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 00 && c <= 177))
	{
		return (0);
	}
	return (1);
}

/*int main()
{
	int j = 240;
	int i;

	i = ft_isascii(j);
	if (i == 0)
	{
		printf("NO es ascii\n");
	}
	else
	{	
		printf("SI es ascii\n");
	}
}*/
