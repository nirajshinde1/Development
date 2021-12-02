#include<stdio.h> // Header File Inclusion

int CountDigit(int); // Function Declaration

int main()	// Entry-point Function
{
	int iValue = 0, iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);	// Function Call
	printf("Number of digits are :%d\n",iRet);

	return 0;
}
int CountDigit(int iNo)  //	Function definition
{ 	
	int iDigit = 0, iCnt = 0;
	if(iNo == 0)
	{
		return 1;
	}
	
	if(iNo<0)  // Input updator
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		//iDigit = iNo % 10;   // optional for digit count
		iCnt++; // iCnt = iCnt +1;
		iNo = iNo / 10;  
	}
	return iCnt;
}
