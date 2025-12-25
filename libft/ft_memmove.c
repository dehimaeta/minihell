/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:35:18 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/01/22 14:35:18 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cd;
	unsigned char	*cs;

	if (!dst && !src)
		return (NULL);
	cd = (unsigned char *)dst;
	cs = (unsigned char *)src;
	if (dst > src)
		while (n-- > 0)
			cd[n] = cs[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

// int main()
// {
// 	char i[] = "abcd";
// 	char j[5];
// 	ft_memmove(j, i, 5);
// 	printf("%s\n", j);
// 	return 0;
// }