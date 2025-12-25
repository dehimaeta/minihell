/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 00:38:11 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/01/25 00:38:11 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *st, int c)
{
	unsigned int	i;

	i = 0;
	while (st[i] && st[i] != (char )c)
		i++;
	if (st[i] == (char)c)
		return ((char *)&st[i]);
	else
		return (NULL);
}
