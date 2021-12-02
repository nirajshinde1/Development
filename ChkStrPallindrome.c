#include<stdio.h>
#include<stdbool.h>

bool ChkPal(char *str)
{
	char *start = NULL;
	char *end = NULL;
	start = str;
	end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		if(*start != *end)
		{
			break;
		}
	    start++;
		end--;
	}
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}

}
int main()
{
	char Arr[30];
	bool bRet = false;

	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);

	bRet = ChkPal(Arr);
	if(bRet == true)
	{
		printf("It is Pallindrome\n");
	}
	else
	{
		printf("It is Not Pallindrome\n");
	}
	return 0;
}