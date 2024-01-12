/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:22:45 by lzaengel          #+#    #+#             */
/*   Updated: 2024/01/12 13:38:22 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(int character)
{
	if (character < '0' || character > '9')
	{
		return (0);
	}
	return (1);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp -> next)
	{	
		temp = temp -> next;
	}
	return (temp);
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*prv;

	if (!*lst)
		*lst = new;
	else
	{
		prv = ft_lstlast(*lst);
		prv -> next = new;
	}
}

int	ft_atoi( const char *theString, t_list *lst)
{
	long int		i;
	long int		result;
	int				neg;

	i = 0;
	neg = 1;
	result = 0;
	if (theString[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	else if (theString[i] == '+')
		i++;
	while (theString[i])
	{
		if (ft_isdigit(theString[i]))
		{
			result = result * 10 + theString[i] - '0';
			i++;
		}
		else
			ft_exit(lst, "Error");
	}
	return (result * neg);
}
