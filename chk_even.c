#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int);   // Function Declaration
int main()
{
	int iNo = 0;
	bool bRet = false;
	
	printf("Enter number :\n");
	scanf("%d",&iNo);
	
	bRet = ChkEven(iNo); //function call
	if(bRet == true)
	{
		printf("%d is Even Number\n",iNo);
	}
	else
	{
		printf("%d is not Even Number\n",iNo);
	}
	return 0;
}
bool ChkEven(int iValue)   // Function Definition
{
	int i = 0;
	if((iValue % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}