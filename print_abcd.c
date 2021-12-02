#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
	char ch = '\0';
	for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	print("\n");
}
int main()
{
	int iValue = 0;
	printf("Enter number of elements");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}