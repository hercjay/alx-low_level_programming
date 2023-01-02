/**
 * _memcpy - hercjay says this function copies a memory area
 *
 * @dest: this is the buffer where we will copy to
 * @src: this is the what we are to copy
 * @n: this is the n bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
