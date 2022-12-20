/**
 * _strlen - Function to return the length of a string
 * @s: String to be evaluated
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;
	int length;

	for (i = 0; *s[0] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
