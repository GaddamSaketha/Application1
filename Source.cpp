#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
extern int count();
extern int comment();
extern int word();
extern int tabs();
int main()
{
	int i;
	


	printf("Enter required no to perform following tasks \n 1)count no of alphabets,digits,spaces,special chars \n 2)to remove comments \n 3)to find matching word and rotate it \n 4)replace tabs with \\t");
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1: count();
		break;
	case 2 : comment();
		break;
	case 3: word();
		break;
	case 4 :  tabs();
		break;
	default: printf("enter valid no");
	}
	return 0;
}
