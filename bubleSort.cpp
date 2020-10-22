#include<iostream>
using namespace std;

void bubleSort(int arr[], int n)
{
    int i, j, temp;

    cout << "Array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // it's just swaping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl << "Sorted Array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[10] = {12,123,14,1,334,112,466,87,54,99};
    bubleSort(arr,10);
    return 0;
}
