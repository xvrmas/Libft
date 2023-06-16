/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:53:33 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/16 19:31:14 by xavier           ###   ########.fr       */
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
			if(!key)
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

static int	lenarray(char const *s, char c, int i)
{
	int	lenarr;

	lenarr = 0;
	while (s[i] != c && s[i] != '\0')
	{
		lenarr++;
		i++;
	}
	return (lenarr);
}

static char	**getfree(char const **dest, int j)
{
	while (j-- > 0)
		free((void *)dest[j]);
	free(dest);
	return (NULL);
}

static char	**doarray(char const *s, char **dest, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dest[j] = (char *)malloc(sizeof(char) * lenarray(s, c, i) + 1);
		if (dest[j] == NULL)
			return (getfree((char const **)dest, j));
		while (s[i] != '\0' && s[i] != c)
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = 0;
	return (dest);
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
	return (doarray(s, dst, c, len));
}

/*int main()
{
   char s[] = "Hol,a, y ,,,,,a,,,d,,,,,i,,,,,os,,,.";
    char c;
    char **dest;
    int i;

    i = 0;
    c = ',';
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
