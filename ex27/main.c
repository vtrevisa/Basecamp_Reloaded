#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_display_file(char *argv)
{
	int	fid;
	char	buf[500000];

	fid = open(argv, O_RDONLY);
	read(fid, buf, sizeof(buf));
	ft_putstr(buf);
	close(fid);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
