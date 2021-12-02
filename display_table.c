// Input : 10
// Output : 10 20 30 40 50 60 70 80 90 100
// Input : 2
// Output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void DisplayTable(int);

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	return 0;
}
void DisplayTable(int iNo)
{
	int iCnt = 0, iMul = 0;
	if(iNo == 0)
	{
		return;
	}
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		iMul = iNo * iCnt;
		printf("%d\n", iMul);
	}

}