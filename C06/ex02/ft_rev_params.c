#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i])
			write(1, &argv[j][i++], 1);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
