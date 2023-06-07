/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:53:33 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/07 21:25:15 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int	count_string(const char *s, char c)
{
	int	len;
	int	key;

	len = 0;
	key = 0;
	while (*s != '\0')
	{
		if (*s == c)
			key = 0;
		else if (key == 0)
		{
			key = 1;
			len++;
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
	while (j > 0)
	{
		j--;
		free((void *)dest[j]);
	}
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

int main(void) {
    char const *s = "Hola;mundo;!";
    char c = ';';

    char **result = ft_split(s, c);

    if (result == NULL) {
        printf("Error: No se pudo dividir la cadena.\n");
        return 1;
    }

    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        i++;
    }

    // Liberar la memoria asignada
    i = 0;
    while (result[i] != NULL) {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}
