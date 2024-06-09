#include<stdio.h>
int i;
void selectionSort(int a[], int n)
{
	int j,maxIndex,temp;
	for(i=0;i<n-1;i++)
	{
		maxIndex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[maxIndex])
			{
				maxIndex=j;
			}
		}
		temp=a[i];
		a[i]=a[maxIndex];
		a[maxIndex]=temp;
	}
}
void printArray(int a[], int n)
{
    printf("Sorted Array with Descending order: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int a[]={6,3,8,12,9}, n= sizeof(a) / sizeof(a[0]);
	selectionSort(a,n);
	printArray(a,n);
	return 0;
}	
