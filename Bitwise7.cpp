#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask = 0,iResult = 0;

	iMask = (iNo ^(0xFFFFFFFF << (iStart-1) & (0xFFFFFFFF>>(32-iEnd))));
	iResult = iNo ^ iMask;

	return iResult;

}
 // iStart : 5
 // iEnd   : 16
 //  0000  0000  0000  0000  0000  0000  0000  0000

 //  0000  0000  0000  0000  1111  1111  1111  0000  

int main()
{
	UINT iValue = 0, iRet = 0, i = 0, j = 0;
	cout<<"Enter Number:\n";
	cin>>iValue;
	cout<<"Enter Starting Position:\n";
	cin>>i;
	cout<<"Enter Starting Position:\n";
	cin>>j;

	
	iRet = ToggleRange(iValue,i,j);

	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}