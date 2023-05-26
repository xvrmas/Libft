#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
        size_t i;
        char *s3;
        size_t len;
        int found;

        i  = 0;
        found = 0;
        len = ft_strlen(s1);
        s3 = malloc(len + 1* sizeof(char));
        if (s3 == NULL)
            return (NULL);
        while (s1[i] != '\0' && found == 0)
        {
            if(s1[i] == set[0])      
                  found = 1;
            if (found == 0)
                s3[i] = s1[i];
            i++;
        }
        found = 0;
        while (len > 0 && found == 0)
        {
            if(s1[len] == set[0])      
                  found = 1;
            if (found == 0)
                s3[len] = s1[len];
            len--;
        }
        return (s3);
}
/*int main()
{
        char s1[] = "42 Barcelona";
        char set[] = "e";
        char *s3;
        
        s3 = ft_strtrim(s1, set);
        printf("%s\n", s3);
        return (0);
}*/
