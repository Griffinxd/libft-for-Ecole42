/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:11:47 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:39:03 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;
	size_t	i;

	if (s)
	{
		size = ft_strlen(s);
		if (start >= size || len == 0 || size == 0)
			return (ft_strdup(""));
		size = 0;
		while (size < len && s[size + start] != '\0')
			size++;
		str = (char *)malloc(size * sizeof(char));
		if (!str)
			return (NULL);
		i = 0;
		while (i < size)
		{
			str[i] = s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
