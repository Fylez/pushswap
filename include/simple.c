/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:53:39 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 23:36:19 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_numbers(t_list **lst)
{
	sa(*lst);
	if (is_sorted(*lst) == 1)
		return ;
	ra(lst);
	if (is_sorted(*lst) == 1)
		return ;
	sa(*lst);
}
