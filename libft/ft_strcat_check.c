#include <stdlib.h>

char *strcat (char *dest, char *app)
{
	int ind1;
	int ind2;
	char *fin;
	while (dest[ind1])
	{
		ind1++;
	}
	while (app[ind2])
	{
		ind2++;
	}
	fin = (char *)malloc(sizeof(char) * (ind1 + ind2 + 1));
	ind1 = 0;
	ind2 = 0;
	while (dest[ind1])
	{
		*fin = dest[ind1];
		fin++;
		ind1++;
	}
	while (app[ind2])
	{
		*fin = app[ind2];
		fin++;
		ind2++;
	}
	*fin = '\0';
	fin-= ind1 + ind2 + 1;   ///Тест нннада
	return (fin);
}
