//Bubble Sort 
#include<stdio.h>
void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubbleSortAdaptive(int A[],int n)
{
    int temp,isSorted = 0;
    for(int i=0;i<n-1;i++)
    {
        printf("Working on pass number %d\n",i+1);
        isSorted = 1;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            break;;
        }
    }
}
void bubbleSort(int A[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        printf("Working on pass number %d\n",i+1);
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }
        }
        
    }
}
void main()
{
    int A[] = {1,2,5,4,6,5,7};
    int n = 7;
    printArray(A,n);
  //  bubbleSort(A,n);
  //  printArray(A,n);
   bubbleSortAdaptive(A,n);
    printArray(A,n);
    
}