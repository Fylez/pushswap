/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:21:47 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/12 13:33:18 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int	is_sorted(t_list *lst)
{
	t_list	*node;
	t_list	*next;

	node = lst;
	while (node -> next)
	{
		next = node-> next;
		if (node -> content > next -> content)
			return (0);
		node = next;
	}
	return (1);
}

void	checkdup(t_list *lst)
{
	t_list	*tocheck;
	t_list	*next;

	tocheck = lst;
	while (tocheck)
	{
		next = tocheck -> next;
		while (next)
		{
			if (tocheck -> content == next->content)
				ft_exit(lst, "Duplicate numbers");
			next = next->next;
		}
		tocheck = tocheck -> next;
	}
}

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	if (!lst)
		return (0);
	temp = lst;
	i = 1;
	while (temp -> next)
	{
		i++;
		temp = temp -> next;
	}
	return (i);
}

void	sort(t_list **lst, t_list **lst2)
{
	int		size;

	size = ft_lstsize(*lst);
	if (size == 2)
		sa(*lst);
	if (size == 3)
		three_numbers(lst);
	if (size == 4 || size == 5)
	{
		fourorfive(lst, lst2, size);
	}
	if (size > 5)
		radixsort(lst, lst2);
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
	checkdup(list_a);
	if (is_sorted(list_a) == 1)
		ft_exit(list_a, 0);
	sort(&list_a, &list_b);
	//ft_lstprint(list_a);
	ft_exit(list_a, 0);
}
