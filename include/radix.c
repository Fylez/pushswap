/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:18:54 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/11 21:09:36 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_a(t_list **lst, t_list **lst2)
{
	int	i;
	int	size;

	size = ft_lstsize(*lst2);
	i = 0;
	while (i++ < size)
		pa(lst2, lst);
}

void	radixsort(t_list **lst, t_list **lst2)
{
	t_list	*temp;
	int		i[5];

	i[0] = 0;
	temp = *lst;
	i[2] = ft_min(*lst);
	ft_lstsimple(*lst, i[2]);
	i[3] = ft_bits(*lst);
	while (i[0] < i[3])
	{
		i[4] = ft_lstsize(*lst);
		i[1] = 0;
		while (i[1]++ < i[4])
		{
			temp = *lst;
			if (((temp -> content >> i[0]) & 1) == 1)
				ra(lst);
			else
				pb(lst, lst2);
		}
		fill_a(lst, lst2);
		i[0]++;
	}
	ft_lstdesimple(*lst, i[2]);
}
