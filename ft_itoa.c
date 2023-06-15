/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:02:01 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/15 16:48:52 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	char	*putnumb(int length, int sign, int n, int flag)
{
	char	*str;
	int		num;

	num = n;
	while (num / 10)
	{
		num /= 10;
		length++;
	}
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	str[length--] = '\0';
	if (sign == -1)
		str[0] = '-';
	if (n == 0)
		str[length++] = '0';
	while (n != 0)
	{
		str[length--] = n % 10 + '0';
		n /= 10;
	}
	if (flag == 1)
		str[10] = '8';
	return (str);
}

char	*ft_itoa(int n)
{
	int	sign;
	int	length;
	int	flag;

	sign = 1;
	length = 1;
	flag = 0;
	if (n == -2147483648)
	{
		n -= -1;
		flag = 1;
	}
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		length++;
	}
	return (putnumb(length, sign, n, flag));
}

/*int main()
{
    int i = -2147483648;
    char *str = ft_itoa(i);

    if (str != NULL) {
        printf("%s\n", str);
        free(str);
    }

    return (0);
}*/
