/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:22:19 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/21 12:39:51 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = node9;
	node9->next = NULL;

	t_list *lst = node1;
	nbr = ft_lstsize(lst);
	printf("Nº de nodos: ");
	printf("%d\n", nbr);
}*/
