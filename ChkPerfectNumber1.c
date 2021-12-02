// Input : 6
// Output : Number is Perfect.
// Input : 7
// Output : Number is not Perfect.


#include<stdio.h> 
#include<stdbool.h>

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
	int iSum = 0, iCnt = 0;
	if(iNumber < 0)  // Updator
	{
		iNumber = -iNumber;
	}
	for(iCnt = 1;iCnt <= (iNumber/2); iCnt++)
	{
		if((iNumber % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}