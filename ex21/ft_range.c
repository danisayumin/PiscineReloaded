/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:09:52 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/04/26 21:56:33 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	
	i = 0;
	int *value = malloc(sizeof(int) * max - min);
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		value[i] = min + i;
		i++;
	}
	return (value);
}

#include	<stdio.h>

int	main(void)
{
	int a = -1;
	int b = 3;
	int i = 0;

	int *c = ft_range(a, b);
	
	while (i < b - a)
	{
		printf("%i", c[i]);
		i++;
		printf("\n");
	}
	
	free(c);
	return (0);
}
