// Input : 5
// Output : 5+4+3+2+1 = 15
// Input : 3
// Output : 3+2+1 = 6
#include<stdio.h>

int Addition(int);

int main()
{
	int iNo = 0 , iRet = 0;
	printf("Enter number:\n");
	scanf("%d",&iNo);
	iRet = Addition(iNo);
	printf("Addition is: %d\n",iRet);
	return 0;
}
int Addition (int iValue)
{
	int iSum = 0;
	int iCnt = 0;
	
	if(iValue<0)			// updator
	{
		iValue = - iValue;
	}
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	 
	 return iSum; 
}