 #include <stdio.h>
#include "holberton.h"
int returnnumber(char *numpassed);
//int _strlen(char *s);

int main(void)
{
	int nildiert;
	char *charnum = "sdfs 0";
	returnnumber(charnum);
	nildiert = returnnumber(charnum);
	printf("Esta es mi variable %d \n", nildiert);
	return (0);
}

int returnnumber(char *numpassed)
{
	int count = 0, number = 0;
	while(*(numpassed + count))
	{
		if ((*(numpassed + count) >= 43) && (*(numpassed + count) <= 57))
		{
			if (number == 0)
			{
				number = (*(numpassed + count)) - 48;
				putchar (*(numpassed + count));
				putchar(10);
				printf("%d number \n", number);
			}
			else
			{
				number = (number*10) + (*(numpassed + count) - 48);
				printf("%d new number - \n", number);
			}
		}
		count++;

	}
	putchar(10);
	printf("HOla que hace\n");
	return (number);
}
/*int _strlen(char *s)
{
	return 0;
	}*/
