char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y < nb)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
