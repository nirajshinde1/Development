#include<stdio.h>

void Count(char *str)
{
	int CCnt = 0, SCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			CCnt++;
		}else if((*str >= 'a') && (*str <= 'z'))
		{
			SCnt++;
		}
		str++;
	}
	printf("Small Letters are:%d\n",SCnt);
	printf("Capital Letters are:%d\n",CCnt);
}
int main()
{
	char Arr[20];
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);

	return 0;
}