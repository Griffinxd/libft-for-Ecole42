/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:05:36 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/18 00:01:39 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*string;

	size = ft_strlen(s) + 1;
	string = malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		string[i] = s[i];
		i++;
	}
	return (string);
}
