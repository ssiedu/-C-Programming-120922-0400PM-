#include<stdio.h>
void main()
{
	int num,rev=0,temp,sod=0,tod=0;
	printf("\n Enter any number : ");
	scanf("%d",&num);//123
	temp=num;
	while(num!=0)
	{
		rev=rev*10+ num%10;//0+3//rev=30+2=320+1=321
		sod = sod+num%10;//3+2+1=6
		tod=tod+1;
		num=num/10;//123/10 , 12/10 ,1/10=0
	}
	printf("\n reverse number is : %d",rev);
	printf("\n sum of digit is : %d",sod);
	printf("\n total number of digit is : %d",tod);
	if(temp==rev)
	printf("\n number is pallindrome");
	else
	printf("\n Numbetr is not pallindrome");
	getch();
}
