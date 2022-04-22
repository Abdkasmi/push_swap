/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:30:58 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 13:29:59 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix2(int *a, int *b, int size_a, int size_b)
{
	int	max_num;
	int	max_bit;
	int	size;
	int	i;
	int	j;

	max_num = size_a - 1;
	max_bit = 0;
	while ((max_num >> max_bit) != 0)
		max_bit++;
	i = -1;
	while (++i < max_bit)
	{
		j = -1;
		size = size_a;
		while (++j < size)
		{
			if ((a[0] >> i) & 1)
				rotate_move(a, size_a);
			else
				push_b(a, b, &size_a, &size_b);
		}
		push_a(a, b, &size_a, &size_b);
	}
}

void	radix(int *a, int *b, int size_a)
{
	int	size_b;
	int	*cpy;

	size_b = 0;
	cpy = little_algo(a, size_a);
	convert(a, cpy, size_a);
	free(cpy);
	if (!is_sort(a, size_a))
		exit(1);
	radix2(a, b, size_a, size_b);
}
