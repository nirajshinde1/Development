// Sumation  of even digits
// input : 1134
// output : 4
// input : 2264
// output : 10
// input : 1137
// output : 0


#include<stdio.h> 

int EvenSum(int); 

int main()	
{
	int iValue = 0, iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = EvenSum(iValue);	
	printf("Sumation of Even Digits is :%d\n",iRet);

	return 0;
}
int EvenSum(int iNo)  
{ 	
	int iDigit = 0, iCnt = 0, iSum = 0;

	if(iNo<0)  // Input updator
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10; 
		
	}
	return iSum;
}
