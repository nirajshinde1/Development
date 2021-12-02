#include<stdio.h> // Header File Inclusion

void Display(); // Function Declaration

int main()	// Entry-point Function
{
	Display();	// Function Call
	
	return 0;
}
void Display()  //	Function definition
{ 	
	// Local Variables
	int iNo = 7521;
	int iDigit = 0;
	
	while(iNo != 0)		// Iteration
	//while(iNo > 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo /10;  
	}
}