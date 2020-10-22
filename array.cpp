#include<iostream>
using namespace std;
void selectionSort(int a[], int n, int b[] ){
   int i, j, min, temp, temp2;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;

            temp2 = b[i];
            b[i] = b[min];
            b[i] = b[min];
            b[min] = temp2;
   }
}
int main() {
   int a[] = { 22,  91,  35,  78,   10,  8, 75, 99,  1,  67 };
   int b[] = { 12,  2,    5,   3,    1, 11, 12, 32, 122, 267 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout << "\nFirst array is: \n";
    for (i = 0; i < n; i++){
   	cout << a[i] <<" ";
   }
   printf("\nSecond array is: \n");
   for (i = 0; i < n; i++){
   	cout<<b[i]<<" ";
   }
   selectionSort(a, n,b);
   printf("\n\n Sorted array is: \n");
   for (i = 0; i < n; i++){
   	cout << a[i] <<" ";
   }
   printf("\n\n Second array is: \n");
   for (i = 0; i < n; i++){
   	cout<<b[i]<<" ";
   }
   return 0;

}
