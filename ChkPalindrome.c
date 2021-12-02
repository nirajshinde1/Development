
// input : 1234
// output : 4321



#include<stdio.h> 
#include<stdbool.h>



bool ChkPal(int); 

int main()	
{
	int iValue = 0;
	bool bRet = false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkPal(iValue);	
	if(bRet == true)
	{
		printf("Number is Pallindrome");
	}
	else
	{
		printf("Number is not Pallindrome");
	}
	return 0;
}
bool ChkPal(int iNo)
{
	int iDigit = 0, iRev = 0;
	int iTemp = iNo;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}