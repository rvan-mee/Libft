#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;
	void	*content;

	if (!lst)
		return ;
	next = lst->next;
	content = lst->content;
	while (next)
	{
		f(content);
		content = next->content;
		next = next->next;
	}
	f(content);
}
