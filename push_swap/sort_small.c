/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:54:42 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/13 16:07:27 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*little_algo(int *list, int size)
{
	int		i;
	int		j;
	int		*sorted_list;
	int		tmp;

	sorted_list = malloc(sizeof(int) * size);
	ft_strcpy(sorted_list, list, size);
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (sorted_list[i] > sorted_list[j])
			{
				tmp = sorted_list[i];
				sorted_list[i] = sorted_list[j];
				sorted_list[j] = tmp;
			}
		}
	}
	return (sorted_list);
}

void	convert(int *a, int *cpy_a, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (a[i] == cpy_a[j])
			{	
				a[i] = j;
				break ;
			}	
		}
	}
}

int	is_sort(int *a, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
		if (a[i] > a[i + 1])
			return (1);
	return (0);
}

int	compare(int *a, int size_a)
{
	return (!((a[0] > a[1] && a[0] > a[size_a - 1] && a[1] > a[size_a - 1])
			|| (a[0] > a[1] && a[0] < a[size_a - 1])));
}

void	sort_small_stack(int *a, int *b, int size_a)
{
	int			min_value;
	int			*cpy_a;
	int			size_b;

	size_b = 0;
	cpy_a = little_algo(a, size_a);
	convert(a, cpy_a, size_a);
	free(cpy_a);
	while (is_sort(a, size_a))
	{
		min_value = min_val(a, size_a);
		if (a[0] == a[1] + 1 || a[1] == a[size_a - 1] + 1)
			swapping(a);
		else if (min_value == a[0])
			push_b(a, b, &size_a, &size_b);
		else if (min_value == a[size_a - 1])
			rr_move(a, size_a);
		else if (compare(a, size_a))
			rotate_move(a, size_a);
		else
			swapping(a);
	}
	push_a(a, b, &size_a, &size_b);
}
