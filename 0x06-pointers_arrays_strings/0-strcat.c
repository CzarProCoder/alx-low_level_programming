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

	max = 0;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}
	for (max = 0; *src != '\0'; max++)
	{
		src++;
		i++;
		*(dest + i) = *src;
	}
	return (dest);
}
