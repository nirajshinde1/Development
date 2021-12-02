/*
Input : 1 2 3 4 5 
Output : 15
*/
#include<stdio.h>

int Addition(int Brr[]) // Brr is pointer so can aslo use as "int Addition(*Brr)"
{
	int iCnt = 0, iSum = 0;
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	return iSum;
}
int main()
{
	int Arr[5];
	
	int iCnt = 0, iRet = 0;
	
	printf("Enter numbers\n");

	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet = Addition(Arr);
	printf("Addition is :%d",iRet);
	return 0;
}