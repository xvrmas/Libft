/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:10:58 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/08 16:34:46 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int main()
{
        int num_elements = 18;
        int element_size = sizeof(int);
        int num_elements2 = 18;
        int element_size2 = sizeof(int);
        int i;
        int j;
      

        i = 0;
        j = 0;
        int *array = (int *)calloc(num_elements, element_size);
        if (array == NULL)
        {
                printf("Error al asignar memoria.");
                return 1;
        }
        printf("calloc:    ");
        while (i < num_elements)
        {
              printf(" %d", array[i]);
              i++;
        }
        printf("\n");        
        free(array);
        
  
        int *array2 =(int *)ft_calloc(num_elements2, element_size2);
	printf("ft_calloc: ");
        while (j < num_elements2)
        {
              printf(" %d", array2[j]);
              j++;
        }
	printf("\n");
        return 0;
}*/
