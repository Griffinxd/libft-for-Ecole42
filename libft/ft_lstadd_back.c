/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanav <ymanav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:07:11 by ymanav            #+#    #+#             */
/*   Updated: 2024/11/17 12:20:37 by ymanav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	if (*list == NULL)
	{
		*list = new;
	}
	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
