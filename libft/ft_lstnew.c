#include "libft.h"

t_list	*ft_lstnew(const char *name, void *content)
{
	t_list	*new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->name = ft_strdup(name);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
