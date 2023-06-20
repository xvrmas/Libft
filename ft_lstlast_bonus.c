/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:00:32 by xavier            #+#    #+#             */
/*   Updated: 2023/06/20 13:59:06 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int main()
{
	t_list *list = NULL;
	int j;		

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
	
	t_list *last_node;
	last_node = ft_lstlast(list);
	j = ft_lstsize(list);
	printf("Hay %d nodos en la lista y el utlimo es el: ", j);	
	if (last_node != NULL)
	{
		printf("%s\n", (char *)last_node->content);
	}
	return (0);
}*/

