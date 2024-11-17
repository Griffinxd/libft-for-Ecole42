/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:32:25 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:32:04 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(s);
	if (!c)
		return (str + len);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if (str[len] == (char)c)
		return (&str[len]);
	return (0);
}
