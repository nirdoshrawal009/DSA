#include<iostream>
using namespace std;
//Bubble sort-maximum element comes upper as a bubble
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int counter=0;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i+1]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter+=1;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}