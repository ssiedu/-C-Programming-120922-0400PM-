#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter your choice in between(a-e): ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a': 
				printf("One");
				break;
		case 'b':
				printf("Two");
				break;
		case 'c':
				printf("Three");
				break;
		case 'd':
				printf("Four");
				break;
		case 'e':
				printf("Five");
				break;
		default:
				printf("Invalid choice");
				break;
	}
	getch();
}
