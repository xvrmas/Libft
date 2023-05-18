#include <stdio.h>
#include <string.h>
 void *ft_memchr(const void *s, int c, size_t n)
 {
    char *str;
    str = s;
    int i;
    while (i < n)
    {
        
    }
    printf("%s\n", str);
    printf("%c\n", c);
    printf("%d\n", n);
 }
int main()
{
   char cadena[] = "Erase una vez...";
   char *puntero; 
 
   /*puntero = (char *)memchr( cadena, 'e', 8 );
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); */
   ft_memchr(cadena, 'e', 8);
 
   return 0;
}
