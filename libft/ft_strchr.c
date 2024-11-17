/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:24:03 by ymanav            #+#    #+#             */
/*   Updated: 2024/07/06 14:31:39 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str++ != '\0')
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	if ((unsigned char)c == '\0')
		return (str);
	return (NULL);
}
