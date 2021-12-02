// Input : 5
// Output : 5*4*3*2*1 = 120
// Input : 3
// Output : 3*2*1 = 6
// Input : 2
// Output : 2*1 = 2
#include<stdio.h>

int Factorial(int);

int main()
{
	int iNo = 0 , iRet = 0;
	printf("Enter number:\n");
	scanf("%d",&iNo);
	iRet = Factorial(iNo);
	printf("Factorial is: %d\n",iRet);
	return 0;
}
int Factorial (int iValue)
{
	int iFact = 1;
	int iCnt = 0;
	
	if(iValue<0)			// updator
	{
		iValue = - iValue;
	}
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	 
	 return iFact; 
}