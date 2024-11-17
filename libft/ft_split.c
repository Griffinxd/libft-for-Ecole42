/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:26:21 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/13 19:43:07 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	splitcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] != '\0' && s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	splitlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	return (i);
}

static char	*splitstr(const char *s, char c)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * splitlen(s, c) + 1);
	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**strarr;
	int		strcount;
	int		i;
	int		j;

	strcount = splitcount(s, c);
	strarr = (char **)malloc(sizeof(char *) * strcount + 1);
	if (!strarr)
		return (0);
	i = 0;
	j = 0;
	while (i < strcount)
	{
		while (s[j] == c)
			j++;
		strarr[i] = splitstr(s + j, c);
		while (s[j] != c && s[j] != '\0')
			++j;
		++i;
	}
	strarr[i] = '\0';
	return (strarr);
}
