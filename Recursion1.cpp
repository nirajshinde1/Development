/*
	Every iterative fuction gets converted into recursive function.
*/
#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////
int SumI(int iNo)
{
	
	int iSum =0;
	while(iNo != 0)
	{
		iSum = iSum +(iNo % 10);
		iNo = iNo /10;
	}
	return iSum;

}

////////////////////////// Recursion //////////////

int SumR(int iNo)
{
	
	static int iSum =0;
	if(iNo != 0)
	{
		iSum = iSum +(iNo % 10);
		iNo = iNo /10;
		SumR(iNo); // Recursive call
	}
	return iSum;
}

int main()
{
	int x = 0, iRet=0;
	cout<<"Enter Number:";
	cin>>x;
	cout<<"By using Iteration:\n";
	iRet = SumI(x); // Iteration(loop)
	cout<<"Summation of digits:"<<iRet<<"\n";
	cout<<"-------------------------\n";
	cout<<"By using Recursion:\n";
	iRet = SumR(x); // Recursion
	cout<<"Summation of digits:"<<iRet<<"\n";

	return 0;
}