/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:40:49 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/20 11:53:52 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = (void *)content;
	node->next = NULL;
	return (node);
}
/*int main()
{

        t_list *node1 = ft_lstnew("festucs");
        t_list *node2 = ft_lstnew("cirera");
        t_list *node3 = ft_lstnew("poma");
        t_list *node4 = ft_lstnew("Platans");
        t_list *node5 = ft_lstnew("cigrons");
        t_list *node6 = ft_lstnew("22");
        t_list *node7 = ft_lstnew("3");
        t_list *node8 = ft_lstnew("LLenties");
        node1->next = node2;
        node2->next = node3;
        node3->next = node4;
        node4->next = node5;
        node5->next = node6;
        node6->next = node7;
        node7->next = node8;
        node8->next = NULL;
        t_list *current_node = node1;
        printf("contingut dels nodes: ");
        while (current_node != NULL)
        {
                 printf("%s ", (char *)current_node->content);
                 current_node = current_node->next;
        }
        printf("\n");
        return (0);
}*/
