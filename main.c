/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:21:47 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/10 22:44:54 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_list *lst, char *reason)
{
	t_list	*next;

	if (lst == NULL)
	{
		exit(0);
	}

	ft_printf ("%s\n", reason);
	while (lst != NULL)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	exit(0);
}

void	ft_lstprint(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	ft_printf("%d\n", temp->content);
	while (temp -> next)
	{
		temp = temp-> next;
		ft_printf("%d\n", temp->content);
	}
}

int	main(int argc, char **argv)
{
	int			nbr;
	int			j;
	t_list		*list_a;
	t_list		*list_b;

	j = 1;
	list_a = 0;
	list_b = 0;
	if (argc == 1)
		exit(0);
	while (j <= argc - 1)
	{
		nbr = ft_atoi(argv[j], list_a);
		ft_lstadd_back(&list_a, ft_lstnew(nbr));
		j++;
	}
	radixsort(&list_a, &list_b);
	ft_printf("LIST A\n");
	ft_lstprint(list_a);
	ft_printf("LIST B\n");
	ft_lstprint(list_b);
	ft_exit(list_a, "EOP");
}