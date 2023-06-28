/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:57:50 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/28 13:02:16 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*aux;

	head = NULL;
	while (lst != NULL)
	{
		aux = f(lst->content);
		new = ft_lstnew(aux);
		if (new == NULL)
		{
			ft_lstclear(&head, del);
			free(head);
			free(aux);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

/*void *ft_map_function(void *content)
{
	char *src;
    char *dest;
	int i;
	
	i = 0;   
   	src	= (char *)content;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (dest == NULL)
          return (NULL);
    while (src[i] != '\0')
    {
        if (src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i] - 32;
        }
        else
        {
            dest[i] = src[i];
        }
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

void ft_delete_function(void *content)
{
    free(content);
}

int main()
{

		t_list *lst = ft_lstnew(malloc(sizeof(char)));
    	*((char *)(lst->content)) = 'a';
	
		lst->next = ft_lstnew(malloc(sizeof(char)));
    	*((char *)(lst->next->content)) = 'b';

		lst->next->next = ft_lstnew(malloc(sizeof(char)));
		*((char *)(lst->next->next->content)) = 'c';

		lst->next->next->next = ft_lstnew(malloc(sizeof(char)));
		*((char *)(lst->next->next->next->content)) = 'd';
		lst->next->next->next->next = NULL;

    	t_list *mapped_lst;
    	t_list *current;
	
		mapped_lst = ft_lstmap(lst,ft_map_function, ft_delete_function);
    	current = mapped_lst;
		printf("\n");
		while (current)
    	{
        	char *value = (char *)(current->content);
        	printf("%s ", (char *)value);
        	current = current->next;
    	}
    	printf("\n");
    	ft_lstclear(&mapped_lst, ft_delete_function);
    	ft_lstclear(&lst, ft_delete_function);

    	return (0);
}*/
