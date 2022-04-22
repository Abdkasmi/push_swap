/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:58:38 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/13 22:50:42 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_move(int *stack, int counter)
{
	int	lenght;
	int	temp2;

	lenght = counter;
	temp2 = stack[lenght - 1];
	while (--lenght)
		stack[lenght] = stack[lenght - 1];
	stack[0] = temp2;
	write(1, "rra\n", 4);
}
