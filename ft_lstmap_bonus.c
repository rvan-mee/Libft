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
