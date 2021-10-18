#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*struct1;

	struct1 = malloc(sizeof(t_list));
	if (struct1 == 0)
		return (0);
	struct1->content = content;
	struct1->next = 0;
	return (struct1);
}
