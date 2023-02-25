//Selection Sort
#include<stdio.h>
void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int A[],int n)
{
    int i,key,j,temp,c;
    for(int i=0;i<n-1;i++)
    {
        key = A[i];
        j = i+1;
       c = i;
        while(j<n)
        {
            if(A[j] <key)
            {
                key = A[j];
                c = j;
            }
            j++;
        }
        temp = A[i];
        A[i] = key;
        A[c] = temp;
    }
}
void main()
{
    int a[] ={12,6,3,15,19,5,7,9,10};
    int n = 9;
    printArray(a,n);
    selectionSort(a,n);
    printArray(a,n);
}