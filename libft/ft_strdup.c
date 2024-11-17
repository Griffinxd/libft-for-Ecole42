/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:05:36 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:35:37 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	string = malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (i < size)
	{
		string[i] = s[i];
		i++;
	}
	return (string);
}
