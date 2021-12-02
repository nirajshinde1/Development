/////////////////////////////////////////////////////////
// Accept number from user and display that number of * on screen.
// Input : 4
// Output : * * * * 

// Input : 2
// Output : * * 

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :        Display * 
//  Description :          Display * as per user input.
//  Input Arguments :      1
//  Output :            
//  Author :               Niraj Shinde
//  Date :                 01/09/2021
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*\n");
	}
}
// Entry point function : main()
int main()
{
    int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);
    return 0;
}
