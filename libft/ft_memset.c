/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:59:12 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/20 18:29:26 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *source, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		++i;
	}
	return ((void *)s);
}
