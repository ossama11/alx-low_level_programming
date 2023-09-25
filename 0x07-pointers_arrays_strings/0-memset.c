/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: Constant byte to be filled.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
