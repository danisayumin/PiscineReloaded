/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:18:27 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/04/25 21:50:34 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (result <= nb)
	{
		if (result == nb)
		{
			return (i);
		}
		i++;
		result = i * i;
	}
	return (0);
}
