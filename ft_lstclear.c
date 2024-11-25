#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;


	while (*lst)
	{
		tmp = (*lst)->next;
		ft_delone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}