#include<stdio.h> // Header File Inclusion

int Display(int); // Function Declaration

int main()	// Entry-point Function
{
	int iValue = 0, iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);	// Function Call
	printf("Addition of digits is :%d\n",iRet);

	return 0;
}
int Display(int iNo)  //	Function definition
{ 	
	int iDigit = 0;
	int iSum = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;  
	}
	return iSum;
}
