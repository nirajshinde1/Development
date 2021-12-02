// Input : 2 3
// Output : 8


#include<stdio.h>

int Power(int,int);

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	printf("Enter second number\n");
	scanf("%d",&iValue2);
	iRet = Power(iValue1,iValue2);
	printf("Result is : %d\n",iRet);
	return 0;
}
int Power(int iNo1,int iNo2)
{
	int iMult = 1, iCnt = 0;
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	for(iCnt = 1; iCnt <= iNo2; iCnt++)    // complexity = O(N)  where N is iNo2
	{
		iMult = iMult * iNo1;
	}
	return iMult;

}