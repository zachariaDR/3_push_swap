/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:32:27 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/15 14:37:38 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_input(t_stack *a, t_stack *b, char **av, int size)
{
	char	**list;
	int		i;

	list = put_args_into_one_list(av);
	if (!list)
		(free_stack(a), free_stack(b), put_error("allocating args failed!\n"));
	if (!is_all_integer(list, size) || is_duplicates(list, size)
		|| is_greater_than_int(list, size))
		(free_list(list), free_stack(a), free_stack(b), put_error("Error\n"));
	i = 0;
	while (list[i])
	{
		push_elem_bottom(a, new_elem(ft_atoi(list[i])));
		i++;
	}
	free_list(list);
}
