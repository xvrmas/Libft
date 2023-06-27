/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:43:26 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/26 18:04:32 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
	t_list *list = NULL;


	t_list *node1 = ft_lstnew("0");	
	t_list *node2 = ft_lstnew("dos");	
	t_list *node3 = ft_lstnew("tres");	
	t_list *node4 = ft_lstnew("cuatro");	
	t_list *node5 = ft_lstnew("cinco");	
	t_list *node6 = ft_lstnew("seis");	
	t_list *node7 = ft_lstnew("7");	
	t_list *node8 = ft_lstnew("ocho");	

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = NULL;

	list = node1;
	ft_lstiter(list, ft_put_content);
}

void    ft_put_content(void *content)
{
	       printf("%s\n", (char *)content);
}*/
