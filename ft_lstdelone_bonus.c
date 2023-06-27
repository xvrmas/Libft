/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:43:49 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/26 12:00:03 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

/*int main()
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
