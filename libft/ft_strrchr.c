/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:07:07 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/01/25 01:07:07 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *st, int c)
{
	unsigned int	i;

	i = ft_strlen(st);
	while (i > 0 && st[i] != (char)c)
		i--;
	if (st[i] == (char)c)
		return ((char *)&st[i]);
	else
		return (NULL);
}
