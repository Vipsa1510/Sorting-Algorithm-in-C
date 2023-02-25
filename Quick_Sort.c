//QuickSort
#include<stdio.h>
void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int partition(int A[],int low ,int high)
{
    int pivot = A[low],i=low+1,j=high,temp;
    
    do
    {
    while(A[i]<=pivot)
    {
        i++;
    }
    while(A[j]>pivot)
    {
        j--;
    }
    if(i<j)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    }while(i<j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int A[],int low,int high)
{
    int partionIndex;
    
    if(low < high)
    {
        partionIndex = partition(A,low,high);
        quickSort(A,low,partionIndex-1);
        quickSort(A,partionIndex+1,high);
    }
}
void main()
{
    int A[] = {5,6,7,3,7,8,15,11,16,10};
    int n = 10;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
}