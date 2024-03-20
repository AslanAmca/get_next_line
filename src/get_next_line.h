/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:15:55 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/25 01:33:20 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *s);
int		ft_has_line_feed(char *line);
char	*ft_create_empty_string(int size);
char	*ft_add_buffer_to_string(char *string, char *buffer);
char	*ft_fill_string(char *string, int fd);
char	*ft_get_first_line(char *string);
char	*ft_delete_first_line(char *string);
char	*get_next_line(int fd);

#endif