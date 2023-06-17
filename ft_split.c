/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:53:33 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/17 17:50:22 by xavier           ###   ########.fr       */
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
			if(key == 0)
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
static char **free_str(const char **str, int point)
{
	while (point-- > 0)
		free((void *)str[point]);
	free(str);
	return (NULL);
}
static char **put_sub_arr(const char *s, char c, char **str, int len)
{
	int	start;
	int	longth;
	int	point;
	int 	temp;
	int	len_arr;

	start = 0;
	point = 0;
	longth = 0;
	len_arr = 0;
	while (s[start] != '\0' && point < len)
	{
		longth = 0;
		while (s[start] == c)
			start++;
		temp = start;
		while (s[temp] != c && s[temp] != '\0')
		{
			len_arr++;
			temp++;
		}
		str[point] = (char *)malloc(sizeof(char) * len_arr + 1);
		if (str[point] == NULL)
			return (free_str((char const **)str, point));
		while (s[start] != c && s[start] != '\0')
			str[point][longth++] = s[start++];
		str[point][longth] = '\0';
		point++;
		len_arr = 0;
	}
	str[point] = 0;
	return (str);		
}

char **ft_split(char const *s, char c)
{
	int len;
	char **str;
		
	len = count_string(s,c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	str = put_sub_arr(s,c,str,len);
	return (str);
}

/*int main()
{
   char s[] = "Ple||ase,||| spl|||i|t|| m|e|||.";
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
