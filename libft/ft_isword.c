/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:22:29 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:53:05 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_isword(char *str, int i, char delim)
{
	if (i == 0)
		return (0);
	if ((str[i] == delim || str[i] == '\0')
		&& (str[i - 1] != delim && str[i - 1] != '\0'))
		return (1);
	return (0);
}
