/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-bayd <tal-bayd@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:12:21 by tal-bayd          #+#    #+#             */
/*   Updated: 2024/07/18 18:30:04 by tal-bayd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	int_stack(t_list **stack, char **av, int ac)
{
	t_list	*newlst;
	int		i;
	char	**args;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		newlst = ft_lstnew(ft_atoi(args[i]));
		if (!newlst)
			ft_error();
		ft_lstadd_back(stack, newlst);
		free(newlst);
		i++;
	}
	index_stack(stack);
	if (ac == 2)
		ft_free(args);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	
	if (ac < 2)
		ft_error();
	check_arg(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
		ft_error();
	*stack_a = NULL;
	*stack_b = NULL;
	int_stack(stack_a, av, ac);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
