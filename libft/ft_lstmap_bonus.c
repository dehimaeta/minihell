/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:18:23 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/04 19:18:23 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		n_node = ft_lstnew(f(lst->content));
		if (!n_node)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}

// void *duplicate_content(void *content)
// {
//     return ft_strdup((char *)content);
// }
// void delete_content(void *content)
// {
//     free(content);
// }
// void print_list(t_list *lst)
// {
//     while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		if (!lst->next)
// 			break ;
// 		lst = lst->next;
// 	}
// }
// int main()
// {
//     char s1[] = "Hello";
//     char s2[] = "World";
//     char s3[] = "42";
//     t_list *lst = ft_lstnew(s1);
//     ft_lstadd_back(&lst, ft_lstnew(s2));
//     ft_lstadd_back(&lst, ft_lstnew(s3));  
//     printf("Original list:\n");
//     print_list(lst);
//     t_list *new_lst = ft_lstmap(lst, duplicate_content, delete_content);
//     printf("\nMapped list:\n");
//     print_list(new_lst);
//     return 0;
// }

