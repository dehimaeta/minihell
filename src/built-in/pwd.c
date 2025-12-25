/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:13:04 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/12/25 20:13:06 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/built_in.h"

int	builtin_pwd(t_data *data)
{
	char	*cwd;
	char	*pwd;

	cwd = getcwd(NULL, 0);
	if (cwd)
	{
		printf("%s\n", cwd);
		free(cwd);
	}
	else
	{
		pwd = get_env(data->env, "PWD");
		if (pwd)
			printf("%s\n", pwd);
		else
			printf("pwd: error retrieving current directory\n");
	}
	return (0);
}
