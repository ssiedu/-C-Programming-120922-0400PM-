#include<stdio.h>
void main()
{
	char str[11]="Ssidigital";
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'|| str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')
		{
			count++;//1//2//3//4
		}
		i++;
	}
	printf("\n Total number of vowels in string : %d",count);
	getch();
}
