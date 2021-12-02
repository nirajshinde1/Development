// Sumation  of even digits
// input : 1234
// output : 4321



#include<stdio.h> 

int RevDigit(int); 

int main()	
{
	int iValue = 0, iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = RevDigit(iValue);	
	printf("Reverse order of Digits is :%d\n",iRet);

	return 0;
}
int RevDigit(int iNo)
{
	int iDigit = 0, iRev = 0;
	if(iNo < 0)  // Updator for change sign of value in as positive
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	return iRev;
}