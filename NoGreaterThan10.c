#include<stdio.h>
#include<stdlib.h>

int NoGreater(int Arr[],int iSize)
{
	int iCnt = 0,i = 0;

	for(i = 0;i<iSize;i++)
	{
		if(Arr[i] > 10)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int iLength = 0, i = 0, iRet = 0;
	int *ptr = NULL;
	
	printf("Enter number of element\n");
	scanf("%d", &iLength);

	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements:\n");
	for(i = 0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);	
	}
	iRet = NoGreater(ptr,iLength);
	printf("Count is :%d\n",iRet);
	free(ptr);

	return 0;
}