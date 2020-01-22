#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int ret;
	char *line = NULL;
	int fd = 0;

	ret = get_next_line(fd, &line);
	printf("%d\n", ret);
}
