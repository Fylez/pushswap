/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:11:06 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/12 13:12:18 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_exit(t_list *lst, char *reason)
{
	t_list	*next;

	if (lst == NULL)
	{
		exit(0);
	}
	if (reason)
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
