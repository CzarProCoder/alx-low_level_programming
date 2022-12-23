/*
 *_strcat - Function that concatenates two strings
 *@dest: First string
 *@src: Second string
 * Return: Returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int max;

	i = 0;
	max = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + max) <= '\0')
	{
		i++;
		*(dest + i) = *(src + max);
		max++;
	}
	return (dest);
}
