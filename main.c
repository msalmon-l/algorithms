/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:10:45 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/03 20:28:41 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

int	main(int argc, char **argv)
{
	list_b	*lista;
	int		in_sort[num - 1];
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	lista = NULL;
	in_sort = NULL;
	while (i < argc)
	{
		if (ft_check_num(argv[i]) < 0)
			return (0);
		i++;
	}
	i = 1;
	in_sort = malloc(sizeof(int) * num);
	if (!insert_sort)
		return (0);
	while (i < argc)
	{
		in_sort[i - 1] = ft_atoi(argv[i]); //añadimos los valores al array
		ft_lstadd_back(&lista, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
//	ft_print_list(lista);
	printf("-----!! IMPRIMIMOS Y EL RESULTADO DEL BURBBLE SORT -----\n");
	burbble_sort(&lista, argc - 1);
	ft_print_list(lista);
	printf("-----!! IMPRIMIMOS Y EL RESULTADO DEL INSERTION SORT -----\n");
	in_sort = insertion_sort(&in_sort);
	

	return (0);
}

void	ft_print_list(list_b *lista)
{
	printf("----entra en imprimir la lista----\n");
	while (lista)
	{
		printf("numero: %i\n", lista->content);
		lista = (*lista).next;
	}
	printf("     !!!****!!!    \n");
}
