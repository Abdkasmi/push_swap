/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:02:11 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 19:05:18 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack {
	int	*a;
	int	*b;
}				t_stack;

void	rotate_move(int *stack, int counter);
void	rr_move(int *stack, int counter);
void	error(void);
void	ft_strcpy(int *dest, int *src, int size);
void	sort_small_stack(int *a, int *b, int size_a);
void	swapping(int *stack);
void	push_a(int *a, int *b, int *nb_a, int *nb_b);
void	push_b(int *a, int *b, int *nb_a, int *nb_b);
void	convert(int *a, int *cpy_a, int size);
void	radix(int *a, int *b, int size_a);
void	radix2(int *a, int *b, int size_a, int size_b);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *b, int c, size_t len);

int		compare(int *a, int size_a);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_check_errors(char *tab);
int		is_sorted(int *str, int lenght);
int		ft_atoi(char *str);
int		check_duplicate(int *stack, int lenght);
int		min_val(int *a, int size);
int		*make_malloc(int size);
int		*little_algo(int *list, int size);
int		is_sort(int *a, int size);

#endif