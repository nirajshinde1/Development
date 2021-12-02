#include<stdio.h>

void Display(int);   // Function Declaration
int main()
{
	int iNo = 0;
	printf("Enter number:\n");
	scanf("%d",&iNo);
	Display(iNo); //function call
	return 0;
}
void Display(int iValue)   // Function Definition
{
	int i = 0;
	for(i = 1 ; i <= iValue; i++ )
	{
		printf("%d\n",i);
	}
}