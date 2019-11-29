#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft/libft.h"
#include "get_next_line.h"
#include "stdio.h"

int				main(int argc, char **argv)
{
	char		*line = NULL;
	char		*filename = ft_strdup(argv[1]);
	int			fd = open(filename, O_RDONLY);
	int 		res = 0;

	while(res = get_next_line(fd, &line) == 1)
	{
		printf("Result[%d]: %s\n", res, line);
		free(line);
	}
	printf("Result[%d]: %s\n", res, line);
	free(line);
	close(fd);
	free(filename);
	//sleep(15);
	return (0);
}
