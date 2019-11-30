#include <stdio.h>
#include <stdlib.h>
#include "fcntl.h"
#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"
#include "stdio.h"

int				main(int argc, char **argv)
{
	char		*line = NULL;
	int			fd; 
	int 		res = 0;
	int 		numline = 0;

	for (int i = 1; i < argc; ++i)
	{
		numline = 1;
		printf("FILE[%s]\n", argv[i]);
		fd = open(argv[i], O_RDONLY);
		while((res = get_next_line(fd, &line)) == 1)
		{
			printf("Result[%d] LINE[%3d]: %s\n", res, numline++, line);
			free(line);
		}
		printf("Result[%d]: %s\n\n", res, line);
		free(line);
		close(fd);
	}
	return (0);
}
