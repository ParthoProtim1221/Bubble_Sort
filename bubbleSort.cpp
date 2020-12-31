/***********************
Welcome to Mr. Saha's Learning video on C++...
************************/

#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j] > arr[j+1])
                // swap
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void setArray(int arr[],int size)
{
    cout << "Give values for array: ";
    for(int i=0; i<size; i++)
    {
        cin>> arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[5];
    int size =5;
    setArray(arr,size);
    cout << "Before sorting : ";
    printArray(arr,size);

    bubbleSort(arr,size);
    cout << "After Sorting:   ";
    printArray(arr,size);


    return 0;
}
