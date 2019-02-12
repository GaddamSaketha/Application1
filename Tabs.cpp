#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int tabs()
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


	FILE* fp1 = fopen("text2.txt", "w");
	char c;
	c = fgetc(fp);
	while (!feof(fp))
	{

		if ((c-9)==0)
		{
			fputc('\\', fp1);
			fputc('t', fp1);
			
		}
		else
			fputc(c, fp1);
		c = fgetc(fp);

	}
	fclose(fp);
	fp1 = fopen("text2.txt", "r");
	fp = fopen(f, "r");
	while (!feof(fp1))
	{
		c = fgetc(fp1);
		fputc(c, fp);
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}