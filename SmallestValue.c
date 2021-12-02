#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[],int iSize)
{
	int i = 0, iMin = Arr[0];// If we take iMax = 0 then negative value gets output as 0

	for(i = 0;i<iSize;i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
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
	iRet = Min(ptr,iLength);
	printf("Count is :%d\n",iRet);
	free(ptr);

	return 0;
}