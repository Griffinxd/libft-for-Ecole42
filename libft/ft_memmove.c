/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:21:11 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:42:00 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	char	*temp;

	if (dest == NULL || src == NULL)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	temp = (char *)malloc(n);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, csrc, n);
	ft_memcpy(cdest, temp, n);
	free(temp);
	return (cdest);
}
