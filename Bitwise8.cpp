#include<iostream>
using namespace std;
typedef unsigned int UINT;

void DisplayByte(UINT iNo)
{
	UINT Byte1 = iNo & 0x000000FF;

	UINT Byte2 = iNo & 0x0000FF00;
	Byte2 = Byte2 >> 8;

	UINT Byte3 = iNo & 0x00FF0000;
	Byte3 = Byte3 >> 16;

	UINT Byte4 = iNo & 0xFF000000;
	Byte4 = Byte4 >> 24;

	cout<<"Byte1 : "<<Byte1<<"\n";
	cout<<"Byte2 : "<<Byte2<<"\n";
	cout<<"Byte3 : "<<Byte3<<"\n";
	cout<<"Byte4 : "<<Byte4<<"\n";

}
 // iStart : 5
 // iEnd   : 16
 //  0000  0000  0000  0000  0000  0000  0000  0000

 //  0000  0000  0000  0000  1111  1111  1111  0000  

int main()
{
	UINT iValue = 0;
	cout<<"Enter Number:\n";
	cin>>iValue;
	
	
	DisplayByte(iValue);

	return 0;
}


/*

ABCD 

step 1:
000D

step 2:
00C0
000C

step 3:
0B00
000B

step 2:
A000
000A

*/