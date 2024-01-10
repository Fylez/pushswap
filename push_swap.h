/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:19:15 by liam              #+#    #+#             */
/*   Updated: 2024/01/10 23:13:47 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
//# include "include/libftfin/libft.h"

typedef struct s_list {
	int				content;
	struct s_list	*next;
}	t_list;

void	ft_lstprint(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_atoi( const char *theString, t_list *lst);
void	pa(t_list **lst1, t_list **lst2);
void	ra(t_list **lst);
void	radixsort(t_list **lst, t_list **lst2);
void	ft_exit(t_list *lst, char *reason);
#endif