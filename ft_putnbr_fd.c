/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:59:26 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 16:16:57 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	putnb(char nb, int fd)
{
	write (fd, &nb, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		putnb('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}	
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{	
		putnb(n + '0', fd);
	}
}

/*int main()
{
	int n;
	int fd;

	n = 2147483647;
	fd = 1;
	ft_putnbr_fd(n, fd);
}*/
