/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:53:33 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/19 13:45:19 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_string(const char *s, char c)
{
	int	len;
	int	key;

	len = 0;
	key = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (key == 0)
			{
				len++;
				key = 1;
			}
		}
		else
		{
			key = 0;
		}
		s++;
	}
	return (len);
}

static int	count(char const *s, char c, int start, int flag)
{
	int	len_arr;

	len_arr = 0;
	if (flag == 0)
	{
		while (s[start] == c)
			start++;
		return (start);
	}
	else
	{
		while (s[start] != c && s[start] != '\0')
		{
			start++;
			len_arr++;
		}
	}
	return (len_arr);
}

static char	**free_str(char const **dest, int j)
{
	while (j-- > 0)
		free((void *)dest[j]);
	free(dest);
	return (NULL);
}

static char	**doarray(char const *s, char **str, char c, int len)
{
	int	longth;
	int	point;
	int	flag;
	int	i;

	point = 0;
	longth = 0;
	i = 0;
	while (s[i] != '\0' && point < len)
	{
		longth = 0;
		flag = 0;
		i = count(s, c, i, flag);
		flag++;
		str[point] = (char *)malloc(sizeof(char) * count(s, c, i, flag) + 1);
		if (str[point] == NULL)
			return (free_str((char const **)str, point));
		while (s[i] != c && s[i] != '\0')
			str[point][longth++] = s[i++];
		str[point][longth] = '\0';
		point++;
	}
	str[point] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = count_string(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return (NULL);
	dst = doarray(s, dst, c, len);
	return (dst);
}

/*int main()
{
   char s[] = "Ple|||ase|||, |s||pli|||||||||t||| me!!!||!.";
    char c;
    char **dest;
    int i;

    i = 0;
    c = '|';
	printf("string original: %s\n", s);
	printf("separador:  %c\n", c);
    dest = ft_split(s,c);
	printf("spliteado: ");
    while (dest[i] != NULL)
    {
      printf("%s", dest[i]);
      i++;
    }
	printf("\n");
    return (0);
}*/
