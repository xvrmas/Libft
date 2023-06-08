/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:08:34 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 13:37:43 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_lencut(const char *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{	
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s3;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[i] && ft_lencut(set, s1[i]))
		i++;
	while (i < len && ft_lencut(set, s1[len - 1]))
		len--;
	if (len < i)
		len = i;
	s3 = malloc((len - i) + 1 * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (i < len)
		s3[j++] = s1[i++];
	s3[j] = '\0';
	return (s3);
}

/*int main()
{
        char s1[] = "42 Barcelona";
        char set[] = "42 ";
        char *s3;

        s3 = ft_strtrim(s1, set);
        printf("return s3-->%s\n", s3);
        return (0);
}*/
