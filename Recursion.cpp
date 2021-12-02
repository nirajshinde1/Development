#include<iostream>
using namespace std;

////////////////////////// Iteration /////////////
void DisplayI()
{
	
	int iCnt =1;
	while(iCnt<=4)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}

}

////////////////////////// Recursion //////////////

void DisplayR()
{
	static int iCnt = 1;
	if(iCnt<=4)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR();
	}
}

int main()
{
	cout<<"Iteration:\n";
	DisplayI(); // Iteration(loop)
	cout<<"-------------------------\n";
	cout<<"Recursion:\n";
	DisplayR(); // Recuesion

	return 0;
}