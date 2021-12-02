#include<iostream>
using namespace std;

class Marvellous
{
public:
	int Addition(int x, int y)
	{
		int iAns = 0;
		iAns = x + y;
		return iAns;
	}
};
int main()
{
	int iNo1 = 0, iNo2 = 0, iret = 0;
	Marvellous mobj;

	cout<<"Enter 1st No.:";
	cin>>iNo1;
	cout<<"Enter 2nd No.:";
	cin>>iNo2;

	iret = mobj.Addition(iNo1,iNo2);
	cout<<"Addition is:"<<iret<<"\n";

	return 0;
}
