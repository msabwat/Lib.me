/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:59:58 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:50:22 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		count_nb(int nb)
{
	int count;

	count = 1;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while ((nb / 10) > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static char		*isspecial(int num)
{
	if (num == 0)
		return (ft_strdup("0"));
	else if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		cnt;
	int		nbr;

	nbr = n;
	if (isspecial(nbr))
		return (isspecial(nbr));
	if (!(str = (char *)malloc(sizeof(char) * (count_nb(n) + 1))))
		return (NULL);
	cnt = count_nb(n);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[cnt] = '\0';
	while (cnt > 0)
	{
		if (cnt - 1 == 0 && nbr < 0)
			return (str);
		str[cnt - 1] = (char)((n % 10) + 48);
		n = n / 10;
		cnt--;
	}
	return (str);
}
