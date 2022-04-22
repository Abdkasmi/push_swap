/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:02:07 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 19:54:55 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(1, "Error!\n", 7);
	exit(1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = malloc(sizeof(char) * (size * nmemb));
	if (!str)
		return (NULL);
	ft_memset(str, 0, (size * nmemb));
	return (str);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}

int	*make_malloc(int size)
{
	int	*stack;

	stack = ft_calloc(size + 1, sizeof(int));
	if (!stack)
		return (0);
	return (stack);
}

int	main(int ac, char **av)
{
	t_stack		stack;
	int			i;

	i = -1;
	stack.a = make_malloc(ac);
	stack.b = make_malloc(ac);
	while (++i < ac - 1)
	{
		if (!ft_check_errors(av[i + 1]))
			exit(1);
		stack.a[i] = ft_atoi(av[i + 1]);
	}
	if (check_duplicate(stack.a, ac - 1))
		error();
	else if (is_sorted(stack.a, ac - 1))
		exit(0);
	if (ac >= 3 && ac <= 6)
		sort_small_stack(stack.a, stack.b, ac - 1);
	else
		radix(stack.a, stack.b, ac - 1);
	free(stack.a);
	free(stack.b);
	return (0);
}
