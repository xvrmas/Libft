/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:48:19 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/19 18:25:12 by xamas-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main()
{
    t_list *my_list = NULL;
    t_list *new_node = malloc(sizeof(t_list));
    new_node->content = "Nuevo nodo";
    new_node->next = NULL;

    ft_lstadd_front(&my_list, new_node);
    t_list *current = my_list;
    while (current != NULL)
    {
        printf("%s\n", (char *)(current->content));
        current = current->next;
    }

    return 0;
}*/
