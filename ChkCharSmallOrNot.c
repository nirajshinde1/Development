#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char c)
{
	if((c>='a') && (c<='z'))
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

	bRet = ChkSmall(ch);

	if(bRet == true)
	{
		printf("It is Small Letter\n");
	}
	else
	{
		printf("It is Not Small Letter\n");
	}

	return 0;
}