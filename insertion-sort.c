/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion-sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:51:57 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/03 20:28:37 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

/*

The algorithm isertion sort compare each argument with the before

- necesitaremos crear una nueva lista que contenta un puntero apuntando a los anteriores
- 

*/

void	*insertion_sort(int *lst, int num)
{
	int		i;
	int		x;
	list_is	*lista;
	int		menor;

	if (!lst)
		return ;
	i = 1;
	while (i < num && lst[i])
	{
		x = i - 1; // igualamos a x  con i, para ir comparando con el resto de numeros que ya pasamos
		menor = i;
		// recorremos los numeros que ya hemos recorridos en i y vamos comparando hasta que encontremos uno que no sea menor
		while (x >= 0 && lst[x] && lst[i] < lst[x])
		{
			//movemos los valores

			x--;
		}
		i++;
	}
}
