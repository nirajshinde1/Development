/*
	Every iterative fuction gets converted into recursive function.
*/
#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////

int CountCapI(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

////////////////////////// Recursion //////////////

int CountCapR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
		CountCapR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet =0;

	cout<<"Enter String\n";
	scanf("%[^'\n']s",Arr);

	cout<<"----------------Iteration-------------------\n";
	iRet = CountCapI(Arr);
	cout<<"Number of Capital Letters are :"<<iRet<<"\n";

	cout<<"----------------Recursion-------------------\n";
	iRet = CountCapR(Arr);
	cout<<"Number of Capital Letters are :"<<iRet<<"\n";
	
	return 0;
}