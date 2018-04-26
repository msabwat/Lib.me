/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntdelimwords.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:44:41 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:21:12 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_cntdelimwords(char *str, char d)
{
	int j;
	int cnt;

	cnt = 0;
	j = 0;
	while (str[j])
	{
		if (ft_isword(str, j, d))
			cnt++;
		j++;
	}
	if (ft_isword(str, j, d))
		cnt++;
	return (cnt);
}
