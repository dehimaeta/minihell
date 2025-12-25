/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:01:48 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/06 15:01:48 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	w_count(char const *str, char c)
{
	size_t	count;
	int		inword;

	count = 0;
	while (*str)
	{
		inword = 0;
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
		{
			if (!inword)
			{
				count++;
				inword = 1;
			}
			str++;
		}
	}
	return (count);
}

static void	*free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	const char	*n_str;
	char		**arr;
	int			wordscount;
	int			i;

	if (!s)
		return (NULL);
	wordscount = w_count(s, c);
	arr = (char **)malloc((wordscount + 1) * (sizeof(char *)));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < wordscount)
	{
		while (*s == c)
			s++;
		n_str = s;
		while (*s && *s != c)
			s++;
		arr[i] = ft_substr(n_str, 0, s - n_str);
		if (!arr[i])
			return (free_arr(arr));
	}
	arr[i] = NULL;
	return (arr);
}

// int main()
// {
// 	char *str = "sxhcdukg avgu gui g";
// 	char del = ' ';
// 	char **arr = ft_split(str, del);
// 	for (int i = 0; i < w_count(str, del); i++)
// 	{
// 		printf("%s\n", arr[i]);
// 	}
// }
