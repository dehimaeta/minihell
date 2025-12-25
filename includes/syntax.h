/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 20:00:35 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/12/25 20:00:38 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYNTAX_H
# define SYNTAX_H

# include "tokenization.h"

void	free_tokens(t_data *db);
void	syntax_error(t_data *db, char *token);
bool	is_redir(t_token_type type);
bool	check_syntax_errors(t_data *db);

#endif