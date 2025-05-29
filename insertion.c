#include<stdio.h>
int main()
{
	int a[50]={10,20,30,40,50};
	int n=5;
	int i;
	int pos=2;
	int item=25;
	printf("Elemnt in array %d\n",a[i]);
	for(i=0;i<n;i++)
	{
		printf("Given element is display:\n",a[i]);
	}
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	n++;
	printf("Array after the insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("Element at index%d:%d\n",a[i],i);
	}
	return 0;
}
