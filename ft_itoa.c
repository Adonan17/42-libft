/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:12:14 by aouassar          #+#    #+#             */
/*   Updated: 2025/10/30 21:33:05 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	nb = n;
	if (nb < 0)
		nb = -nb;
	res[len] = '\0';
	while (len--)
	{
		res[len] = (nb % 10) + '0';
		nb /= 10;
		if (nb == 0 && len == 1 && n < 0)
			break ;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
