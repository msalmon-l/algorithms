#ifndef ALGORITHMS_H
# define ALGORITHMS_H
# include <stdio.h>
# include <stdlib.h>

int		ft_check_num(char *num);
int		ft_atoi(const char *str);

typedef	struct s_list
{
	int				*content;
	struct s_list	*next;
}	list_b;

list_b	*ft_lstnew(int *content);
list_b	*ft_lstlast(list_b *lst);
int		ft_lstsize(list_b *lst);
void	*ft_lstadd_front(list_b **lst, list_b *new);
void	*ft_lstadd_back(list_b **lst, list_b *new);


void	burbble_sort(list_b **lst, int num);
//void	ft_compare(list_b list);
void	ft_change(list_b **lista, int post, int num);
void	ft_print_list(list_b *lista);
#endif
