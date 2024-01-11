/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:12:10 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 19:31:59 by lzaengel         ###   ########.fr       */
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
