/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 03:57:00 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/02/06 18:05:34 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int main()
// {
// 	printf("%d\n",atoi("  		-+--+-2345mda"));
// 	printf("%d\n",ft_atoi("  		-+--+-2345mda"));
// 	return 0;
// }