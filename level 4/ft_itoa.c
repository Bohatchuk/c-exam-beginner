char		*ft_itoa(int nbr)
{
	char	*dst;
	long	i;
	long	num;
	int		j;

	i = 10;
	num = nbr;
	j = 1;
	if (nbr < 0 && j++)
		num = -num;
	while (num / i > 0 && ++j)
		i *= 10;
	dst = (char *)(malloc(sizeof(*dst) * (j + 1)));
	if (!dst)
		return (NULL);
	j = 0;
	if (nbr < 0)
		dst[j++] = '-';
	while ((i /= 10) > 0)
		dst[j++] = (num / i) % 10 + '0';
	dst[j] = '\0';
	return (dst);
}