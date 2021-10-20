#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;

	if (!lst)
		return (0);
	newlst = ft_lstnew(f(lst->content));
	if (newlst == 0)
		return (0);
	current = newlst;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew(f(lst->content));
		current = current->next;
		if (current == 0)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		lst = lst->next;
	}
	return (newlst);
}

/*
		make new list compised of f(lst->content)\
		current = current->next\


Parameters #1. 			The adress of a pointer to an element.

#2. 					The adress of the function used to iterate on
						the list.

#3. 					The adress of the function used to delete the
						content of an element if needed.

Return value 			The new list. NULL if the allocation fails.

External functs. 		malloc, free

Description 			Iterates the list ’lst’ and applies the function
						’f’ to the content of each element. Creates a new
						list resulting of the successive applications of
						the function ’f’. The ’del’ function is used to
						delete the content of an element if needed.


if (new == 0)
		{
			ft_lstclear(&new, del);
			return (0);
		}

*/