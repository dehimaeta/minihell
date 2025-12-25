/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 00:27:26 by rmalkhas          #+#    #+#             */
/*   Updated: 2024/12/07 00:27:26 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cd;
	unsigned char	*cs;

	if (!dst && !src)
	{
		return (NULL);
	}
	cd = (unsigned char *)dst;
	cs = (unsigned char *)src;
	while (n-- > 0)
	{
		*cd++ = *cs++;
	}
	return (dst);
}
