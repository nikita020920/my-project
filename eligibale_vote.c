#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=1&&age<=13)
	{
		printf("you are child you are not eligibale for vote\n");
	}
	else
	 if(age>=14&&age<=17)
	{
		printf("you are teeneger you are not eligibale for vote\n");
	}
	
	else
	if(age>=18&&age<=45)
	{
		printf("you are yonger you are  eligibale for vote\n");
	}
	else
	if(age>75)
	{
		printf("you are a older you are eligibale for vote\n");
	}
	else
	{
		printf("Invailed age");
	}
	return 0;
}
