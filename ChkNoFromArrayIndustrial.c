#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool ChkNumber(int Arr[],int iSize)
{
	int i = 0;
	bool bAns = false;

	for(i = 0;i < iSize;i++)
	{
		if(Arr[i] == 11)
		{
			bAns = true;
			break;
		}
	}
	return bAns;
}
int main()
{
	int iLength = 0, i = 0;
	bool bRet = false;
	int *ptr = NULL;
	
	printf("Enter number of element\n");
	scanf("%d", &iLength);

	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements:\n");
	for(i = 0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);	
	}
	bRet = ChkNumber(ptr,iLength);
	if(bRet == true)
	{
		printf("Number is there\n");
	}
	else
	{
		printf("Number is not there\n");
	}
	free(ptr);

	return 0;
}