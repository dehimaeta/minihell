/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anihamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:57:24 by anihamba          #+#    #+#             */
/*   Updated: 2025/12/25 20:57:26 by anihamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/syntax.h"

bool	is_redir(t_token_type type)
{
	return (type == REDIR_IN || type == REDIR_OUT
		|| type == HEREDOC || type == APPEND);
}

void	syntax_error(t_data *db, char *token)
{
	db->for_syntax_err = 2;
	g_err_no = 2;
	printf("syntax error: unexpected token `%s'\n", token);
	free_tokens(db);
}

bool	check_syntax_errors(t_data *db)
{
	t_token	*curr;

	if (db->for_syntax_err == 2)
		return (true);
	curr = db->token;
	if (!curr)
		return (false);
	if (curr->type == S_PIPE)
		return (syntax_error(db, curr->value), true);
	while (curr->next)
	{
		if ((curr->type == S_PIPE
				&& (curr->next->type == S_PIPE))
			|| (is_redir(curr->type) && (curr->next->type == S_PIPE
					|| is_redir(curr->next->type))))
		{
			syntax_error(db, curr->next->value);
			return (true);
		}
		curr = curr->next;
	}
	if (curr->type == S_PIPE || is_redir(curr->type))
		return (syntax_error(db, curr->value), true);
	return (false);
}
