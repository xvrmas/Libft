/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamas-ga <xamas-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:48:19 by xamas-ga          #+#    #+#             */
/*   Updated: 2023/06/20 10:43:31 by xavier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main() 
{
    // Crear nodos de lista
	t_list* node1 = (t_list*)malloc(sizeof(t_list));
	if (node1 == NULL) 
	{
		printf("Error al asignar memoria para el nodo 1.\n");
			return 1;
	}
	node1->content = "Hola ";
	node1->next = NULL;
	t_list* node2 = (t_list*)malloc(sizeof(t_list));
	if (node2 == NULL) 
	{
		printf("Error al asignar memoria para el nodo 2.\n");
		free(node1);
		return 1;
	}
	node2->content = "y ";
	node2->next = NULL;
	
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	if (node3 == NULL)
	{
		printf("Error al crear el nodo 3.\n");
			return 1;
	}
	node3->content = "adios.";
	node3->next = NULL;

	// Crear una lista vacía
	t_list* list = NULL;

	// Agregar nodos a la lista
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	// Imprimir los elementos de la lista
	t_list* current = list;
	while (current != NULL)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");

	// Liberar memoria
	free(node1);
	free(node2);

	return 0;
}*/

