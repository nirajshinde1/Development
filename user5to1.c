#include<stdio.h>

void Display();

int main()
{
	int iValue = 0;
	printf("Enter number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
void Display(int iNo)
{
	int i = 0;
	if(iValue == 0)
	{
		printf("Your enterd number is 0\n");
		return;
	}
	if(iNo<0)    // inpute updator
	{
		iNo = -iNo;
	}
	for(i = iNo ; i >= 1; i--)
	{
		printf("%d\n",i);
	}
}