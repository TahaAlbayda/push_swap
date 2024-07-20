/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-bayd <tal-bayd@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:18:20 by tal-bayd          #+#    #+#             */
/*   Updated: 2024/07/20 14:57:31 by tal-bayd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

void	ft_error(void);
void	check_arg(int ac, char **av);
void	ft_free(char **tab);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	index_stack(t_list **stack);
void	free_stack(t_list **stack);
int		is_sorted(t_list **stack);
void	print_stack(t_list **stack);
int		push(t_list **stack_from, t_list **stack_to);
int		pa(t_list **stack_b, t_list **stack_a);
int		pb(t_list **stack_a, t_list **stack_b);
void	ft_free_stack(t_list **stack_a, t_list **stack_b);
void	ft_free_stack2(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack);
int		sb(t_list **stack_b);
int		sa(t_list **stack_a);
int		swap(t_list **stack);
int		ss(t_list **stack_a, t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rb(t_list **stack_b);
int		ra(t_list **stack_a);
int		rotate(t_list **stack);
int		rrb(t_list **stack_b);
int		rra(t_list **stack_a);
int		reverserotate(t_list **stack);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		get_distance(t_list **stack, int index);
void	nor1( t_list **stack_a, t_list *head, int min);

#endif