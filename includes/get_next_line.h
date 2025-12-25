/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:59:28 by rmalkhas          #+#    #+#             */
/*   Updated: 2025/12/25 19:59:33 by rmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);

char	*ft_strjoin_free(char *s1, char *s2, size_t l1, size_t l2);

size_t	ft_strlen(const char *str);

char	*ft_free_null(char *s);

int		ft_newline_instr(char *s);

#endif