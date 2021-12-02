// Input : 5
// Output : 5*4*3*2*1 = 120
// Input : 3
// Output : 3*2*1 = 6
// Input : 2
// Output : 2*1 = 2
#include<stdio.h>

unsigned long int Factorial(int);

int main()
{
	int iNo = 0 ;
	unsigned long int iRet = 0;
	printf("Enter number:\n");
	scanf("%d",&iNo);
	iRet = Factorial(iNo);
	printf("Factorial is: %ld\n",iRet);
	return 0;
}
unsigned long int Factorial (int iValue)
{
	unsigned long int iFact = 1;
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