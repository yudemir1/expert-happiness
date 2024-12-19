#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*clearbuffer(char	*buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i])
	{
		buffer[i] = 0;
		i++;
	}
	return (buffer);
}

int main()
{
	int fd = open("longtext.txt", O_RDONLY, 0777);
	static char buffer[BUFFER_SIZE];
	int i = 1;
	int bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = 0;
		printf("%d -) %s\n", i, buffer);
		i++;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
}