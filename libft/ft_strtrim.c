/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:42:23 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/04 16:42:23 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && check_trim(set, s1[start]))
		start++;
	while (check_trim(set, s1[end]) && start <= end)
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *s1 = "aloayiewyhialo";
// 	char *set = "al";
// 	printf("%s\n", ft_strtrim(s1,set));
// 	return (0);
// }