/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:14:57 by xavier            #+#    #+#             */
/*   Updated: 2023/06/15 19:38:07 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{

	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int main()
{
	
	t_list *node1 =	ft_lstnew("festucs");
	t_list *node2 = ft_lstnew("cirera");
	t_list *node3 = ft_lstnew("poma");
	t_list *node4 = ft_lstnew("Platans");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	t_list *currentNode = node1;
    	while (currentNode != NULL)
    	{
       		 printf("Contenido del nodo: %s\n", (char *)currentNode->content);
       		 currentNode = currentNode->next;
    	}
	return (0);	
}
