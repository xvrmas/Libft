/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:28:17 by xavier            #+#    #+#             */
/*   Updated: 2023/06/20 17:20:39 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int cont;

	cont = 0;
	while (lst != NULL)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}

/*int main()
{
	int nbr;

	t_list  *node1 = ft_lstnew("1");
	t_list  *node2 = ft_lstnew("2");
	t_list  *node3 = ft_lstnew("3");
	t_list  *node4 = ft_lstnew("4");
	t_list  *node5 = ft_lstnew("5");
	t_list  *node6 = ft_lstnew("6");
	t_list  *node7 = ft_lstnew("7");
	t_list  *node8 = ft_lstnew("8");
	t_list  *node9 = ft_lstnew("9");
	t_list  *node10 = ft_lstnew("10");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = node9;
	node9->next = node10;
	node10->next = NULL;
	
	t_list *lst = node1;
	nbr = ft_lstsize(lst);
	printf("Nº de nodos: ");
	printf("%d\n", nbr);
}*/
