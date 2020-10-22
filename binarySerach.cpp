#include<iostream>
using namespace std;

int binSearch(int arr[],int n,int key)
{
    int mid,left = 0,right = n - 1;
    mid = left + right / 2;

    for (int i = 0; i < n; i++){
        if (key == arr[mid]){
            return 1;
        }
        if (key > mid){
            left = mid + 1 / 2;
        }
        if (key < mid){
            right = mid - 1 / 2;
        }
    }

    return -1;

}
int main()
{

    int arr[5] = {1,2,3,45,444};

    if(binSearch(arr,5,2)){
        cout<< "Found at "<<binSearch(arr,5,2);
    }
    else{
        cout<<"not found";
    }
    return 0;
}
