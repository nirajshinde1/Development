#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iSize)
{
	int i = 0, iMax = Arr[0],iMin = Arr[0],iDiff = 0;// If we take iMax = 0 then negative value gets output as 0

	for(i = 0;i<iSize;i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
		iDiff = iMax - iMin; 
	}
	return iDiff;
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
	iRet = Diffrence(ptr,iLength);
	printf("Difference is :%d\n",iRet);
	free(ptr);

	return 0;
}