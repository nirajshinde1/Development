#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////
void DisplayI(int iNo)
{
	
	int iCnt =1;
	while(iCnt<=iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}

}

////////////////////////// Recursion //////////////

void DisplayR(int iNo)
{
	static int iCnt = 1;
	if(iCnt<=iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR(iNo);
	}
}

int main()
{
	int i =0;
	cout<<"Enter Number of Iteration/Recursion:";
	cin>>i;
	cout<<"By using Iteration:\n";
	DisplayI(i); // Iteration(loop)
	cout<<"-------------------------\n";
	cout<<"By using Recursion:\n";
	DisplayR(i); // Recursion

	return 0;
}