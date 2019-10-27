
#include "libft.h"
#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int			main(int argc, char **argv)
{
	char	*stock;
	int		fd;
	//t_tetri	*tetri;

	if (argc != 2)
	{
		printf("%s","Mention one file");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	stock = stock_str(fd);
	if (!check_str(stock))
	{
		printf("%s","error");
		return (0);
	}
	close(fd);
	//tetri = stock_tetri(stock);
	return (0);
}
