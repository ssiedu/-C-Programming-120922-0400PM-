#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,*ptr,i;
	printf("\n Enter the size of array : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n Previously Memory allocation : \n");
	for(i=0;i<n1;i++)
	{
		printf("\n %u",(ptr+i));
	}
	printf("\n Enter new size of Array : ");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("\n Newly Memory allocation : \n");
	for(i=0;i<n2;i++)
	{
		printf("\n %u",(ptr+i));
	}
	free(ptr);
	getch();
}
