/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 00:51:54 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/01 00:51:54 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*st;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	st = malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	while (s[start + i] && i < len)
	{
		st[i] = s[start + i];
		i++;
	}
	st[i] = '\0';
	return (st);
}
