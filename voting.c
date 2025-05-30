#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible to vote");
	}
	else
	{
	printf("you are not eligibale to vote");	
	}
	return 0;
}
