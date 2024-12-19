/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yudemir <yudemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 06:18:59 by yudemir           #+#    #+#             */
/*   Updated: 2024/12/19 12:14:33 by yudemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	*read_file(char *buffer, int fd)
{
	char	*temp;

	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		
	}
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char *line;

	buffer = read_file(buffer, fd);
	
}