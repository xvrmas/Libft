/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:17 by xavier            #+#    #+#             */
/*   Updated: 2023/06/27 10:59:56 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{	
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

void *ft_map_function(void *content)
{
	int *value;

	value = (int *)content;
	printf("%d ", *value);
    	int *mapped_value = malloc(sizeof(int));
    	*mapped_value = (*value) * 5;
    	return (void *)mapped_value;
}

void ft_delete_function(void *content)
{
    free(content);
}

/*int main()
{
    	t_list *lst = ft_lstnew(malloc(sizeof(int)));
    	*((int *)(lst->content)) = 5;
    	
	lst->next = ft_lstnew(malloc(sizeof(int)));
    	*((int *)(lst->next->content)) = 10;
	lst->next->next = NULL;

    	t_list *mapped_lst;
    	t_list *current;
    
	mapped_lst = ft_lstmap(lst,ft_map_function, ft_delete_function);
    	current = mapped_lst;
	printf("\n");
    	while (current)
    	{
        	int *value = (int *)(current->content);
        	printf("%d ", *value);
        	current = current->next;
    	}
    	printf("\n");
    	ft_lstclear(&mapped_lst, ft_delete_function);
    	ft_lstclear(&lst, ft_delete_function);

    	return (0);
}*/

