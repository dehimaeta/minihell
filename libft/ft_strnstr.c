/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:00:45 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/01/31 21:00:45 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nsize;
	size_t	hsize;

	i = 0;
	nsize = ft_strlen(needle);
	hsize = ft_strlen(haystack);
	if (nsize == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while ((i + nsize) <= len && i < hsize)
	{
		if (ft_strncmp(haystack + i, needle, nsize) == 0)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
