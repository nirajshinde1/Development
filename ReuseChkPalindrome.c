// Input : 121
// Output : Number is Palindrome
// Input : 123
// Output : Number is not Palindrome


#include<stdio.h> 
#include<stdbool.h>

int Reverse(int);
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
int Reverse(int iNo)
{
	int iDigit = 0, iRev = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	return iRev;
}
bool ChkPal(int iNo)
{
	int iTemp = 0;
	iTemp = Reverse(iNo);
	if(iTemp == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}