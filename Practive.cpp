// C++ program to rotate an array by 
// d elements
#include <bits/stdc++.h>
using namespace std;
 
/*Function to left Rotate arr[] of 
  size n by 1*/
void GetReversedarray(int arr[],int d,int n)
{
    for(int i = 0;i<d;i++)
    {
        int temp;
        int j=0;
        temp = arr[0];
        for(j = 0 ; j<n-1;j++)
        {
           
            arr[j] = arr[j+1];          
        }
        arr[j] = temp;
    }
}
/* utility function to print an array */
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}
 

/* Driver program to test above functions */
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = sizeof(arr) / sizeof(arr[0]);
    
   // Function calling
   GetReversedarray(arr,2,n);
   //leftRotate(arr, 2, n);
   printArray(arr, n);
   std::cin.get();
  
   return 0;
}