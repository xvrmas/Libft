/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:01:17 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/26 12:42:37 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	if (lst)
	{
		head = *lst;
		while (head)
		{
			next = head->next;
			ft_lstdelone(head, (del));
			head = next;
		}
		*lst = NULL;
	}	
}

/*void delete_content(void *content)
{
    free(content);
}

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = malloc(sizeof(int));
    *(int*)(node1->content) = 10;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = malloc(sizeof(int));
    *(int*)(node2->content) = 20;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = malloc(sizeof(int));
    *(int*)(node3->content) = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    t_list *list = node1;

    ft_lstclear(&list, delete_content);

    if (list == NULL)
        printf("La lista ha sido borrada exitosamente.\n");
    else
        printf("Error al borrar la lista.\n");

    return 0;
}*/
