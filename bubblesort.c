
#include<stdio.h>
int i;
void bubbleSort(int arr[],int n)
{
	int j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[]={10,7,8,9,1,5}, n= sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	bubbleSort(arr,n);
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
