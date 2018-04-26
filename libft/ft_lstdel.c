/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:23:56 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:24:23 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *next;

	temp = *alst;
	while (temp)
	{
		next = temp->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = next;
	}
	*alst = NULL;
}
