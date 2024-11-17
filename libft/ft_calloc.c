/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:38:25 by ymanav            #+#    #+#             */
/*   Updated: 2024/08/04 17:42:00 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*addr;

	addr = malloc(nmemb * size);
	if (addr == NULL)
		return (NULL);
	ft_bzero(addr, (nmemb * size));
	return (addr);
}
