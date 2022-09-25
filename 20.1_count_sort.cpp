#include<iostream>
using namespace std;

void CountSort(int arr[], int n)
{
    int k = arr[0];
    for(int i=0; i<n; i++)
    {
        k = max(k, arr[i]); // get the maximum value element
    }
    
    int count[10] = {0}; // cant assign dynamic array
    for(int i=0; i<n; i++)
    {
       count[arr[i]]++; // make count of each element
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1]; 
    }

    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i]; // first we decrementing value of that count array value and substituting value of arr[i] at that index  
    }
    
    for(int i=0; i<=n; i++){
        arr[i] =output[i];
    }

}

int main(){
    int arr[] ={1,3,2,3,4,1,6,4,3};
    CountSort(arr, 9);

    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
  
   return 0;

}