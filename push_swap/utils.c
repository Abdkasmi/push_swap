/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:56:56 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 16:11:52 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_strcpy(int *dest, int *src, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		dest[i] = src[i];
}

int	ft_atoi(char *str)
{
	int			i;
	long long	num;
	int			sign;

	i = 0;
	sign = 0;
	num = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if ((num > INT_MAX && !sign) || (num - 1 > INT_MAX && sign))
		error();
	if (sign)
		return (-num);
	return (num);
}

int	min_val(int *a, int size)
{
	int	i;
	int	min;

	i = 0;
	min = a[0];
	while (i++ < size)
		if (a[i] < min)
			min = a[i];
	return (min);
}
