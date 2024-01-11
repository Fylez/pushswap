/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:19:15 by liam              #+#    #+#             */
/*   Updated: 2024/01/11 23:30:52 by lzaengel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
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
void	sa(t_list *lst);
void	sb(t_list *lst);
void	ss(t_list *lst, t_list *lst2);
void	pa(t_list **lst1, t_list **lst2);
void	pb(t_list **lst1, t_list **lst2);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **lst, t_list **lst2);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **lst, t_list **lst2);
void	radixsort(t_list **lst, t_list **lst2);
void	ft_exit(t_list *lst, char *reason);
int		ft_lstsize(t_list *lst);
int		ft_bits(t_list *lst);
int		ft_min(t_list *lst);
void	ft_lstsimple(t_list *lst, int min);
void	ft_lstdesimple(t_list *lst, int min);
void	three_numbers(t_list **lst);
int		is_sorted(t_list *lst);
#endif