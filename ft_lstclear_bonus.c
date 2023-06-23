/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xavier <xamas-ga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:03:13 by xavier            #+#    #+#             */
/*   Updated: 2023/06/22 13:10:57 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *head;
	t_list *next;

	if (lst)
	{
		head = *lst;
		while (head)
		{
			next = head->next;
			ft_lstdelone(head, (del));
			head = next;
		}
		*lst = NULL;
	}
}
