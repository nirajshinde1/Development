#include<stdio.h>

void Display();   // Function Declaration
int main()
{
	Display(); //function call
	return 0;
}
void Display()   // Function Definition
{
	int i = 0;
	for(i = 1 ; i <= 8; i++ )
	{
		printf("#\n");
	}
}