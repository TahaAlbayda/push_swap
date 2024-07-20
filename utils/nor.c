/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nor.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-bayd <tal-bayd@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:53:30 by tal-bayd          #+#    #+#             */
/*   Updated: 2024/07/20 14:56:56 by tal-bayd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nor1( t_list **stack_a, t_list *head, int min)
{
	if (head->next->index == min)
		ra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}
