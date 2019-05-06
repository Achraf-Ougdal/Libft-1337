#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*out;
	t_list	*tmp;
	
	if (!lst)
		return (NULL);
	tmp = f(lst);
	out = tmp;
	while(lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if(!(tmp->next))
			return (NULL);
		tmp = tmp->next;
	}
	return (out);
}
