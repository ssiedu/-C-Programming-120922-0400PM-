#include<stdio.h>
void main()
{
	int a[10];
	int i,j,n,temp;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Element [%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i] = a[j];
				a[j]= temp;
			}
		}
	}
	 printf("\n sorted Array : \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n %d",a[i]);
	 }
	 getch();
}
