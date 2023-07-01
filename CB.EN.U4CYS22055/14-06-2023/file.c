#include <stdio.h>
int main()
{
	FILE *fd;
	char ch;
	fd = fopen("/home/raas/Documents/C/project/1000.txt","r");
	if (fd == NULL)
	{
		printf("file not found");
	}
	else 
	{
		printf("file opened");
		while (ch!=EOF)
		{
			ch=fgetc(fd);
			printf("%c", ch);
		}
		fclose(fd);
	}
	return 0;
}
