/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burbble-sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:19:47 by msalmon-          #+#    #+#             */
/*   Updated: 2023/02/24 20:55:48 by msalmon-         ###   ########.fr       */
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
	while (i < num)
	{
		x = num - i;
		while (x > 0)
		{
			if((**lst).next)
				ft_change(lst, ((num - i) - x), num - i);
			x--;
		}
		i++;
	}
}

void	ft_change(list_b **lista, int post, int num)
{
	list_b	*lst_init;
	list_b	*menor;
	list_b	*resto;
	list_b	*pre;
	int		i;
	
	lst_init = (*lista);
	menor = NULL;
	resto = NULL;
	pre = NULL;
	i = 0;
	if (post == 0)
	{
		if ((**lista).next && ((**lista).content > (**lista).next->content))
		{
			menor = (**lista).next;
			resto = (**lista).next->next;
			menor->next = (*lista);
			(*lista) = menor;
			(**lista).next->next = resto;
		}
	} else 
	{
		while (post > 0)
		{
			pre = (*lista);
			*lista = (**lista).next;
			post--;
		}
		if ((**lista).next && ((**lista).content > (**lista).next->content))
		{
			menor = (**lista).next;
			if ((**lista).next->next)
				resto = (**lista).next->next;
			menor->next = (*lista);
			menor->next->next = resto;
			pre->next = menor;
		}
		(*lista) = lst_init;
	}
}
