#include<stdio.h>

void DisplayFactors(int);

int main()
{
	int iNo = 0;
	
	printf("Enter number:");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	
	return 0;
}
void DisplayFactors(int iValue)
{
	int iCnt = 0;
	if(iValue)
	{
		iValue = -iValue;
	}
	for(iCnt = 1; iCnt < iValue; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}






