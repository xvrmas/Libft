/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:58:01 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/26 16:59:12 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		str = ft_lstlast(*lst);
		str->next = new;
	}
}

/*int main()
{
	t_list *list = NULL;
	int j;		
	t_list *last_node;
	
	t_list *node1 = ft_lstnew("primero");
	t_list *node2 = ft_lstnew("segundo");
	t_list *node3 = ft_lstnew("tercero");
	t_list *node4 = ft_lstnew("cuarto");
	t_list *node5 = ft_lstnew("quinto");
	t_list *node6 = ft_lstnew("sexto");
	t_list *node7 = ft_lstnew("septimo");
	t_list *node8 = ft_lstnew("octavo");
	t_list *node9 = ft_lstnew("noveno");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = node9;
	node9->next = NULL;

	list = node1;
	t_list *node10 = ft_lstnew("el decimo");
	j = ft_lstsize(list);
	printf("Hay %d nodos en la lista.", j);
	printf("\n");

	ft_lstadd_back(&list, node10);
	j = ft_lstsize(list);
	printf("Ahora hay %d nodos ", j);
	last_node = ft_lstlast(list);
		if (last_node != NULL)
	{
		printf("y el nuevo nodo es: %s\n.", (char *)last_node->content);
	}
	
}*/
