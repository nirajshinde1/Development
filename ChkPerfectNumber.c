// Input : 6
// Output : Number is Perfect.
// Input : 7
// Output : Number is not Perfect.

// Note : It is reusability friendly, used for industrial approach

#include<stdio.h> 
#include<stdbool.h>

int SumFactors(int);
bool ChkPerfect(int); 

int main()	
{
	int iValue = 0;
	bool bRet = false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkPerfect(iValue);	
	if(bRet == true)
	{
		printf("Number is Perfect");
	}
	else
	{
		printf("Number is not Perfect");
	}
	return 0;
}
bool ChkPerfect(int iNumber)
{
	int iRet = 0;
	if(iNumber < 0)  // Updator
	{
		iNumber = -iNumber;
	}
	iRet = SumFactors(iNumber);
	if(iRet == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int SumFactors(int iNo)
{
	int iSum = 0, iCnt = 0;
	if(iNo < 0)    // Updator
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}