//Insertion Sort
#include<stdio.h>
void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertionSort(int A[],int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
void main()
{
    int a[] ={12,6,3,15,19,1,9};
    int n = 7;
    printArray(a,n);
    insertionSort(a,n);
    printArray(a,n);
}