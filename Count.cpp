#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count()
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
	int alp = 0, dig = 0, sp = 0, sc = 0, i = 0;
	char c;
	c = fgetc(fp);
	while (!feof(fp))
	{
		if (((c -'a'>=0) && (c-'a'<=26)) || ((c-'A'>=0) && (c-'A'<=26)))
		{
			alp++;
		}
		else if ((c - '0' >= 0) && (c - '0' <= 9))
		{
			dig++;
		}
		else if (c == ' ')
		{
			sp++;
		}
		else
			sc++;
		c = fgetc(fp);
	}
	fclose(fp);
	printf(" \n count of \n alphabets : %d \n digits: %d \n spaces : %d \n special chars: %d \n", alp, dig, sp, sc);
	return 0;
}