/*
	Every iterative fuction gets converted into recursive function.
*/
#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////

int StrlenI(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

////////////////////////// Recursion //////////////

int StrlenR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		StrlenR(str);
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
	iRet = StrlenI(Arr);
	cout<<"Length of string is :"<<iRet<<"\n";

	cout<<"----------------Recursion-------------------\n";
	iRet = StrlenR(Arr);
	cout<<"Length of string is :"<<iRet<<"\n";
	return 0;
}