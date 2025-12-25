/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 01:29:17 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/01 01:29:17 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		ls1;
	int		ls2;
	int		i;
	int		j;
	char	*str;

	i = -1;
	j = -1;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[++j] != '\0')
	{
		str[i] = s2[j];
		i++;
	}
	str[ls1 + ls2] = '\0';
	return (str);
}

// int main(int argc, char **argv)
// {
// 	printf("%s\n", ft_strjoin(argv[1], argv[2]));
// }