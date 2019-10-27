
#ifndef FILLIT_H
# define FILLIT_H

typedef struct		s_tetri
{
	char			c;
	int				x[4];
	int				y[4];
	struct s_tetri	*next;
}					t_tetri;

int					count_tetri(char *str);
void				set_tetri(t_tetri **tmp, char *str);
t_tetri				*stock_tetri(char *str);
char				*stock_str(int fd);
char				**tetri_map_new(char **map, int size);
char				**tetri_map_dot(char **map, int size);
char				**remove_tetri(char **map, t_tetri *tetri, int size);
char				**insert_tetri(char **map, t_tetri *tetri, int size);
int					check_link(char *stock, int j);
int					count_valid_char(char *stock, int j);
int					check_str(char *stock);
int					check_tetri(char **map, t_tetri *tetri, int size);

#endif
