#include<stdio.h> // Header File Inclusion

void Display(int); // Function Declaration

int main()	// Entry-point Function
{
	int iValue = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);	// Function Call
	
	return 0;
}
void Display(int iNo)  //	Function definition
{ 	
	int iDigit = 0;
	while(iNo != 0)		// Iteration
	//while(iNo > 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo /10;  
	}
}