/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:22:28 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/05/14 16:53:58 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	i;
	int	resultat;
	int	sign;
	int	cont;

	i = 0;
	resultat = 0;
	sign = 1;
	cont = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
		cont++;
	}
	while (cont <= 1 && str[i] >= '0' && str[i] <= '9')
	{			
		resultat = resultat * 10 + str[i] - '0';
		i++;
	}
	return (sign * resultat);
}

/*int main()
{
	char str[] = "+-45i050";
	int  res;
	int res2;

	res2 = ft_atoi(str);
	res = atoi(str);
	printf("atoi: %d\n", res);
	printf("ft_atoi(): %d\n", res2);
	return (0);
}*/
