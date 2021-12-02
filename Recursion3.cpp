/*
	Every iterative fuction gets converted into recursive function.
*/
#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////

int SumI(int Arr[],int iSize)
{
	int iSum = 0,i = 0;
	i = 0;
	while(i < iSize)
	{
		iSum = iSum + Arr[i];
		i++;
	}
	return iSum;
}

////////////////////////// Recursion //////////////

int SumR(int Arr[], int iSize)
{
    static int iSum = 0, i = 0;
    
    if( i < iSize)
    {
        iSum = iSum + Arr[i];
        i++;
        SumR(Arr,iSize);
    }
    return iSum;
}

int main()
{
	int iLength = 0,i = 0,iRet = 0;
	int *p = NULL;
	cout<<"Enter no. of elements:\n";
	cin>>iLength;

	p = new int[iLength];

	cout<<"Enter elements:\n";

	for(i = 0;i<iLength;i++)
	{
		cin>>p[i];
	}

	cout<<"By using Iteration\n";
	iRet = SumI(p,iLength);
	cout<<"Summation of elements is :"<<iRet<<"\n";
	cout<<"----------------------------------------------\n";
	cout<<"By using Recursion:\n";
	iRet = SumR(p,iLength);
	cout<<"Summation of elements is :"<<iRet<<"\n";

	delete []p;
	return 0;
}