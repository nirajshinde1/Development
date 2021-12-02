#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char c)
{
	if((c>='A') && (c<='Z'))
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

	bRet = ChkCapital(ch);

	if(bRet == true)
	{
		printf("It is Capital Letter\n");
	}
	else
	{
		printf("It is Not Capital Letter\n");
	}

	return 0;
}