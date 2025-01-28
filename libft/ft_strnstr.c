/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 02:53:34 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/19 12:47:43 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	hi;
	size_t	ni;

	hi = 0;
	ni = 0;
	if (needle[ni] == 0)
		return ((char *)haystack);
	while (haystack[hi] != '\0' && hi < n)
	{
		if (haystack[hi] == needle[0])
		{
			while (needle[ni] != '\0'
				&& haystack[hi + ni] == needle[ni] && ni + hi < n)
			{
				if (needle[ni + 1] == '\0')
					return ((char *)&haystack[hi]);
				ni++;
			}
		}
		hi++;
	}
	return (NULL);
}
