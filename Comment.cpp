#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int comment()
{

	char f[20];
	printf("enetr file name");
	scanf("%s", f);
	FILE* fp = fopen(f, "r");

	if (fp == NULL)
	{
		printf("\n error in opening file");
		return -1;
	}



	FILE* fp1 = fopen("T.txt", "w");
	char c = fgetc(fp);
	printf("%c",c);
	fputc(c, fp1);
	while (!feof(fp))
	{
		printf("%c", c);
		if (c == 47)
		{
			c = fgetc(fp);
			if (c == 47)
			{
				c = fgetc(fp);
				while (c != '\n')
				{
					c = fgetc(fp);
				}
				fputc(c, fp1);
			}
			else if (c == '*')
			{
				c = fgetc(fp);
				while (c != '*')
				{
					c = fgetc(fp);
				}
				c = fgetc(fp);
				if (c == 47)
				{
					c = fgetc(fp);
				}

			}
			else
			{
				fputc(c, fp1);
			}

		}
		else
			fputc(c, fp1);
		c = fgetc(fp);
	}
	fclose(fp1);
	fclose(fp);
	fp = fopen(f, "w");
	fp1 = fopen("T.txt", "r");
	while (!feof(fp1))
	{
		c = fgetc(fp1);
		printf("%c", c);
		fputc(c,fp);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}