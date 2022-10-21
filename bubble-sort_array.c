#include<stdio.h>
 
void printArray(int* A, int n)	//Function to print the array
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n)
{
    int i,j,temp;
    for (i = 0; i < n-1; i++) // For number of pass
    {
        for (j = 0; j<n-1-i ; j++) // For comparison in each pass
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
 
int main()
{
    int A[] = {10,15,1,23,52,3,9,11,5,6}, n = 10;
    printf("The original array is:\n");
    printArray(A, n); 
    bubbleSort(A, n); // Function call to sort the array
    printf("The sorted array is:\n");
    printArray(A, n); 
    return 0;
}

