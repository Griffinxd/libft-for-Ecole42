/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 02:53:28 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:36:19 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		++nptr;
	if (*nptr == '-')
	{
		sign = -1;
		++nptr;
	}
	else if (*nptr == '+')
		++nptr;
	while (*nptr <= '9' && *nptr >= '0')
	{
		value = value * 10 + (*nptr - '0');
		++nptr;
	}
	value *= sign;
	return (value);
}
