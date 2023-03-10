#ifndef ALGORITHMS_H
# define ALGORITHMS_H
# include <stdio.h>
# include <stdlib.h>

int		ft_check_num(char *num);
int		ft_atoi(const char *str);

//structure by burbble sort
typedef	struct s_list
{
	int				content;
	struct s_list	*next;
}	list_b;

list_b	*ft_lstnew(int *content);
list_b	*ft_lstlast(list_b *lst);
int		ft_lstsize(list_b *lst);
void	*ft_lstadd_front(list_b **lst, list_b *new);
void	*ft_lstadd_back(list_b **lst, list_b *new);


void	burbble_sort(list_b **lst, int num);
void	ft_change(list_b **lista, int post, int num);
void	ft_print_list(list_b *lista);

//structure by insertion sort
/*
typedef struct s_list
{
	int		content;
	int		position;
	struct	s_list	*next;
	struct	s_list	*previus;
}	list_is;

list_is	*ft_lstnew();
list_is	*ft_lstlast();
void	ft_lstadd_back();
*/
#endif
