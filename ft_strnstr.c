/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:53:05 by aouassar          #+#    #+#             */
/*   Updated: 2025/10/23 12:29:27 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while ((i + n_len) <= len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < n_len && haystack[i + j] == needle[j])
				j++;
			if (j == n_len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
