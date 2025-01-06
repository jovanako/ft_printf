int		write_str(char *s)
{
	int		count;

	count = 0;
	while (*s != '\0')
	{
		write (1, s, 1);
		s++;
		count++;
	}
	free(s);
	return (count);
}