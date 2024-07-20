/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tal-bayd <tal-bayd@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:12:50 by tal-bayd          #+#    #+#             */
/*   Updated: 2024/07/20 15:37:42 by tal-bayd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dupnb(int num, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (num == ft_atoi(av[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_num(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '+' || num[i] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_arg(int ac, char **av)
{
	char	**args;
	int		i;
	long	tmp;

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
		tmp = ft_atoi(args[i]);
		if (!is_num(args[i]))
			{
				ft_free(args);
				ft_error();
			}
			
		if (ft_dupnb(tmp, args, i))
			{
				ft_free(args);
				ft_error();
			}
		if (tmp < -2147483648 || tmp > 2147483647)
			{
				ft_free(args);
				ft_error();
			}
		i++;
	}
	if (ac == 2)
		ft_free(args);
}
