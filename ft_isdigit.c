/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:27:18 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/07/03 11:52:09 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}

/*int main(int argv, char *argc[])
{
	int i;
	int j;

	i  = 1;
	while (i < argv)
	{
		j = ft_isdigit((int)argc[i][0]);
	
		if (j == 0)
		{
			printf("NO es un numero.\n");
		}
		else
		{
			printf("SI es un numero\n");
		}
		i++;
	}	
}*/
