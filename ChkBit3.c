/*
	Accept number and chk wether it's 7th and 12th  bit is ON. 
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask = 0x00000840;
	UINT iResult = 0;

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
	UINT iValue = 0;
	bool bRet = false;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet = ChkBit(iValue);

	if(bRet == true)
	{
		printf("7th and 12th Bit is ON\n");
	}
	else
	{
		printf("7th and 12th Bit is OFF\n");
	}

	return 0;
}