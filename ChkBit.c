#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo)
{
	int iMask = 0x00000008;
	int iResult = 0;

	iResult = iNo & iMask;

	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet = ChkBit(iValue);

	if(bRet == true)
	{
		printf("4th Bit is ON\n");
	}
	else
	{
		printf("4th Bit is OFF\n");
	}

	return 0;
}