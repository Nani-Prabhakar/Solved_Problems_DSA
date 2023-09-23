//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends



#include<bits/stdc++.h>
using namespace std;
class Solution
{
    
//   void helper(int arr[], int n, int i, int j)
// {
//     if (i == n)
//         return;
//     if (j > 0 && arr[j - 1] > arr[j])
//     {
//         swap(arr[j - 1], arr[j]);
//         helper(arr, n, i, j - 1);
//     }
//     else
//     {
//         helper(arr, n, i + 1, i + 1); // Change j to i
//     }
// }

     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0 and arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends