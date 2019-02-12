#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int word()
{
	char fl[20];
	printf("enetr file name");
	scanf("%s", fl);
	FILE* fp = fopen(fl, "r");

	if (fp == NULL)
	{
		printf("\n error in opening file");
		return -1;
	}



	char s[20];
	int i=0,j=0, f = 0;
	printf("enter word");
	scanf("%s", s);
	char c = fgetc(fp);
	FILE* fp1 = fp;
	char ch, ch1;;
	while (!feof(fp))
	{
		fp1 = fp;
		i = 0;
		if (c ==s[i])
		{
			
			i++;

			c = fgetc(fp);
			while (s[i] != '\0')
			{
				if (s[i] != c)
				{
					f = 1;
					break;
				}
				i++;
				c = fgetc(fp);
			}
			if (f == 0)
			{
				while (fp1 < fp)
				{
					ch = fgetc(fp1);
					ch1 = fgetc(fp);
					fputc(ch1, fp1);
					fputc(ch, fp1);

				}
				fseek(fp1, 1, SEEK_CUR);
				fseek(fp, -1, SEEK_CUR);
				
			}

		}
		fseek(fp, fp-fp1, SEEK_CUR);
		c = fgetc(fp);
	}
	return 0;
}