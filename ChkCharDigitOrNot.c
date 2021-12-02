#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char c)
{
	if((c>='0') && (c<='9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char ch = '\0';
	bool bRet = false;

	printf("Enter Letter:\n");
	scanf("%c",&ch);

	bRet = ChkDigit(ch);

	if(bRet == true)
	{
		printf("It is a Digit\n");
	}
	else
	{
		printf("It is Not a Digit\n");
	}

	return 0;
}