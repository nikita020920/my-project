#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		printf("%d is a leep year\n",year);
	}
	else
	{
		printf("%d is not leep year\n",year);
	}
	return 0;
}
