/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:15:41 by aouassar          #+#    #+#             */
/*   Updated: 2025/10/23 15:46:51 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*arr;

	len = ft_strlen(s);
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s, len);
	arr[len] = '\0';
	return (arr);
}
