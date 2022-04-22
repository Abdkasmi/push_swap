/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:46:58 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 13:30:48 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move(int *stack, int counter)
{
	int	lenght;
	int	i;
	int	temp2;

	i = -1;
	lenght = counter;
	temp2 = stack[0];
	while (++i < lenght - 1)
		stack[i] = stack[i + 1];
	stack[i] = temp2;
	write(1, "ra\n", 3);
}
