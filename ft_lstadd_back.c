/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:14:50 by msalmon-          #+#    #+#             */
/*   Updated: 2023/02/21 22:31:13 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

void	*ft_lstadd_back(list_b **lst, list_b *new)
{
	list_b	*list;

	list = NULL;

	if (*lst == NULL)
	{
		printf("entra al null %i\n", new->content);
		*lst = new;
	}
	else
	{
		printf("else no es nulo %i y el nuevo es %i\n", (**lst).content, new->content);
		list = ft_lstlast(*lst);
		list->next = new;
	}
	return (0);
}
