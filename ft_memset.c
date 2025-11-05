/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:51:58 by aouassar          #+#    #+#             */
/*   Updated: 2025/10/21 12:29:44 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void			*a;
	unsigned char	*p;

	a = b;
	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		len--;
		p++;
	}
	return (a);
}
