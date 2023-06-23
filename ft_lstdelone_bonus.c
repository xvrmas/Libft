/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:30:02 by xavier            #+#    #+#             */
/*   Updated: 2023/06/22 13:01:11 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

/*void free_int(void *ptr)
{
    int *num = (int *)ptr;
    free(num);
}

int main()
{
    	t_list *node = ft_lstnew(malloc(sizeof(int)));
    
	int *num = (int *)node->content;
    	*num = 42;

    	printf("Antes de llamar a ft_lstdelone:\n");
    	printf("Contenido del nodo: %d\n", *num);

    	ft_lstdelone(node, free_int);

    	printf("Después de llamar a ft_lstdelone:\n");

    	return 0;
}*/
