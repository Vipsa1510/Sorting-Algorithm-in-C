// Count Sort
#include <stdio.h>
#include <stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int max(int A[], int n)
{
    int maximum = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > maximum)
        {
            maximum = A[i];
        }
    }
    return maximum;
}
void countSort(int *A, int n)
{
    int m = max(A, n), i, j;
    int *count = (int *)malloc((m + 1) * sizeof(int));
    for (i = 0; i < m + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {

        count[A[i]] = count[A[i]] + 1;
    }
    i = 0;
    j = 0;
    while (i <= m)
    {

        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;

            j++;
        }
        else
        {
            i++;
        }
    }
}
void main()
{
    int A[] = {5, 6, 7, 3, 7, 8, 15, 11, 16, 10};
    int n = 10;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
}