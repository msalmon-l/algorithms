/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:38:57 by msalmon-          #+#    #+#             */
/*   Updated: 2023/02/21 22:31:11 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

list_b	*ft_lstnew(int *content)
{
	list_b	*new;

	new = malloc(sizeof(list_b));
	if (new == 0)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
