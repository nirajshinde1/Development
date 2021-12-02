// Count Even 

#include<stdio.h> // Header File Inclusion

int CountEven(int); // Function Declaration

int main()	// Entry-point Function
{
	int iValue = 0, iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);	// Function Call
	printf("Number of even digits are :%d\n",iRet);

	return 0;
}
int CountEven(int iNo)  //	Function definition
{ 	
	int iDigit = 0, iCnt = 0;
	if(iNo == 0)  // filter
	{
		return 1;
	}
	if(iNo<0)  // Input updator
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iCnt++ ; 
		}
		iNo = iNo / 10; 
	}
	return iCnt;
}
