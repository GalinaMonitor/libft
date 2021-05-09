/*
**@file					ft_lstadd_back.c
**@author				Gmonitor (gmonitor@student.21-school.ru)
**@date					2021-05-10
**
**@brief				Function adds the element 'new' at the end of the list
**
**@used_functions		ft_lstlast
**						!No protection from input NULL!
*/
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}
