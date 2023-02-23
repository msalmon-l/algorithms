/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burbble-sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:19:47 by msalmon-          #+#    #+#             */
/*   Updated: 2023/02/23 21:32:57 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

void	burbble_sort(list_b **lst, int num)
{
	int		i;
	int		x;
	list_b	*lista;

	if (*lst == NULL)
		return ((void)0);
	i = 0;
	lista = *lst;
	printf("entra en la burbujaa!!!!! \n");
	printf("-------------------------------------\n");
	while (i < num)
	{
		x = num - i;
		while (x >= 0)
		{
		//	printf("aqui se compara %i, con el siguiente %i\n", (**lst).content, (**lst).next->content); 
			if((**lst).next)
				ft_change(lst, ((num - i) - x), num - i);
			x--;

		}
		i++;
		printf("-------------------------------------\n");
	}
}

void	ft_change(list_b **lista, int post, int num)
{
	list_b	*lst_init;
	list_b	*menor;
	list_b	*resto;
	int		i;
	
	printf("entra en los changes\n");
	lst_init = (*lista);
	menor = NULL;
	resto = NULL;
	i = 0;
	if (post == 0)
	{
		printf("post es 0\n");	
		if ((**lista).next && ((**lista).content > (**lista).next->content))
		{
			menor = (**lista).next;
			resto = (**lista).next->next;
			menor->next = (*lista);
			printf("el valor de menor es %i\n", menor->content);
			(*lista) = menor;
			(**lista).next->next = resto;
		}
		ft_print_list((*lista));
	} else if (post == num)
	{
		printf("post es igual num\n");
	} else 
	{
		printf("post es %i,  num es igual %i\n", post, num);	
		while (post > i && (**lista).next)
		{
			printf("el valor de donde esta en lista es %i\n", (**lista).content);
			*lista = (**lista).next;
			i++;
			//printf("esta es la vuelta %i\n", i);
		}
		printf("despues del bucle y el nuevo valor de lista es %i\n", (**lista).content);
		{
		if ((**lista).next && ((**lista).content > (**lista).next->content))
			//menor = (**lista).next;
			printf("el numero menor es %i, y el numero mayor es%i\n", (**lista).next->content, (**lista).content);
		}
		//printf("final else!!\n");
	}
	(*lista) = lst_init;	
//	ft_print_list((*lista));
}
