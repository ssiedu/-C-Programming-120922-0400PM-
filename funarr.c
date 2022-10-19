#include<stdio.h>
void getarray(int a[],int n);
void main()
{
	int n,i;
	int a[5];
	printf("\n Enter any Numbers : ");
	scanf("%d",&n);
	printf("\n Enter array Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	getarray(a,n);
	getch();
}
void getarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
