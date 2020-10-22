#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10] = {23,123,43,12,52,51,56,98,125,199};

    insertionSort(arr,10);
    return 0;
}

