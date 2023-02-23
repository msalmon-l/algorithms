/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:10:45 by msalmon-          #+#    #+#             */
/*   Updated: 2023/02/23 21:32:20 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

int	main(int argc, char **argv)
{
	list_b	*lista;
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	lista = NULL;
	while (i < argc)
	{
		if (ft_check_num(argv[i]) < 0)
			return (0);
		i++;
	}
	i = 1;
	while (i < argc)
	{
//		printf("i es igual a=%i\n", i);
		//if (i == 1)
		//	lista = ft_lstnew(argv[i]);
		ft_lstadd_back(&lista, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
//	ft_print_list(lista);
//	printf("sale de imprimir la primera lista??\n");
	burbble_sort(&lista, argc - 1);
	ft_print_list(lista);
	return (0);
}

void	ft_print_list(list_b *lista)
{
	printf("entra en imprimir la lista\n");
	while (lista)
	{
		printf("Es aqui donde falla????? -> %i\n", lista->content);
		lista = (*lista).next;
		if (lista != NULL)
			printf("en la lista ha cambiado a %i\n", lista->content);
	}
	printf("sale del buche del imprimir listai\n");
}
