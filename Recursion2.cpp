/*
	Every iterative fuction gets converted into recursive function.
*/
#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////
int FactorialI(int iNo)
{
	
	int iFact = 1;
	while(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
	}
	return iFact;

}

////////////////////////// Recursion //////////////

int FactorialR(int iNo)
{
	
	static int iFact = 1;
	if(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
		FactorialR(iNo);
	}
	return iFact;

}

int main()
{
	int x = 0, iRet=0;
	cout<<"Enter Number:";
	cin>>x;
	cout<<"By using Iteration:\n";
	iRet = FactorialI(x); // Iteration(loop)
	cout<<"Factorial is:"<<iRet<<"\n";
	cout<<"-------------------------\n";
	cout<<"By using Recursion:\n";
	iRet = FactorialR(x); // Recursion
	cout<<"Factorial is:"<<iRet<<"\n";

	return 0;
}