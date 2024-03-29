/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:12:10 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 23:28:52 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *lst)
{
	t_list	*next;
	int		c;

	next = lst -> next;
	c = lst -> content;
	lst -> content = next -> content;
	next -> content = c;
}

void	sa(t_list *lst)
{
	ft_printf("sa\n");
	swap(lst);
}

void	sb(t_list *lst)
{
	ft_printf("sb\n");
	swap(lst);
}

void	ss(t_list *lst, t_list *lst2)
{
	ft_printf("ss\n");
	swap(lst);
	swap(lst2);
}
