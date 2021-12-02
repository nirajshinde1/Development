/*
	Accept number and bit position chk wether it's bit ON or OFF. 
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;

	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}

	iMask = iMask << (iPos -1);
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
	UINT iValue = 0, iBit = 0;
	bool bRet = false;

	printf("Enter Number:\n");
	scanf("%d",&iValue);
	printf("Enter Position:\n");
	scanf("%d",&iBit);

	bRet = ChkBit(iValue,iBit);

	if(bRet == true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}

	return 0;
}