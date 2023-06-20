/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:09:24 by xavier            #+#    #+#             */
/*   Updated: 2023/06/20 14:34:35 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{	
	
}

int main()
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
	t_list *node10 = ft_lstnew("nuevo");
	j = ft_lstsize(list);
	printf("Ahora hay %d  nodos en la lista.", j);
	ft_lstadd_back(lst, node10);
	
}
