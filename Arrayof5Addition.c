/*
Input : 1 2 3 4 5 
Output : 15
*/
#include<stdio.h>

int main()
{
	int Arr[7];	// Array of 5 integers
	
	int iCnt = 0, iSum = 0;
	
	printf("Enter numbers\n");
/*
	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);	
*/
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	// iSum = Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];
	//    OR
	/*
	iSum = iSum + Arr[0];
	iSum = iSum + Arr[1];
	iSum = iSum + Arr[2];
	iSum = iSum + Arr[3];
	iSum = iSum + Arr[4];
	*/
	//   OR
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		iSum = iSum + Arr[iCnt];	
	}
	printf("Addition is :%d",iSum);
	return 0;
}