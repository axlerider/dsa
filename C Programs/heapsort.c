#include<stdio.h>
#include <conio.h>
void Adjust(int Heap_of_Numbers[],int i)  /*Function to arrange the elements in the heap*/
{
int j;
int copy;
int Number;
int Reference = 1;
Number=Heap_of_Numbers[0];
while(2*i<=Number && Reference==1)
{
j=2*i;   
if(j+1<=Number && Heap_of_Numbers[j+1] > Heap_of_Numbers[j])
j=j+1;
if( Heap_of_Numbers[j] < Heap_of_Numbers[i])
Reference=0;
else
{
copy=Heap_of_Numbers[i];
Heap_of_Numbers[i]=Heap_of_Numbers[j];
Heap_of_Numbers[j]=copy;
i=j;
}
}
}
void Make_Heap(int heap[])
{
int i;
int Number_of_Elements;
Number_of_Elements=heap[0];
for(i=Number_of_Elements/2;i>=1;i--)
Adjust(heap,i);
}
int main()
{
int heap[30];
int NumberofElements;
int i;
int LastElement;
int CopyVariable;
printf("Enter the number of elements present in the unsorted Array:");
scanf("%d",&NumberofElements);
printf("nEnter the members of the array one by one:"); /* Asking for the elements of the unsorted array*/
for(i=1;i<=NumberofElements;i++)
scanf("%d",&heap[i]);
heap[0]=NumberofElements;
Make_Heap(heap);
while(heap[0] > 1) /*Loop for the Sorting process*/
{
LastElement=heap[0];
CopyVariable=heap[1];
heap[1]=heap[LastElement];
heap[LastElement]=CopyVariable;
heap[0]--;
Adjust(heap,1);
}
printf("nSorted Array:n");/*Printing the sorted Array*/
for(i=1;i<=NumberofElements;i++)
printf("%d ",heap[i]);
return 0;
}


Short code in heap sort in C language

#include <stdio.h>
void swap(int* a, int* b)
{
        int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}
