#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iSum = 0,i = 0;
	float fResult =0.0f;

	for(i = 0;i<iSize;i++)
	{
		iSum = iSum + Arr[i];
	}
	fResult = (float)iSum/(float)iSize; // Explicit type casting
	return fResult;
}
int main()
{
	int iLength = 0, i = 0;
	int *ptr = NULL;
	float fret = 0.0f;
	printf("Enter number of element\n");
	scanf("%d", &iLength);

	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter elements:\n");
	for(i = 0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);	
	}
	fret = Average(ptr,iLength);
	printf("Average is :%f\n",fret);
	free(ptr);

	return 0;
}