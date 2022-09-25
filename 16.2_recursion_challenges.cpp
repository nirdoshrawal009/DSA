#include<iostream>
using namespace std;
/*
//check if an array is sorted or not by recursion
bool sorted(int arr[] , int n){
    if (n == 1) // when will our array is sorted when there is only 1 element in array
    {
        return true;
    }
    bool restArray = sorted(arr+1, n-1); // arr + 1 basically starting from index 1
    return (arr[0] < arr[1]) && restArray;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sorted(arr , n)<<endl;
    return 0;
}

// print increasing order number till n and decreasing order till n
void dec(int n){
    if (n == 1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    return dec(n-1);
}
int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}
//increaing order till n
void inc(int n){
    if (n == 1)
    {
    cout<<"1"<<endl;
    return;
}
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}
*/
//find first and last occurance of a number in an array
int first_occurance(int arr[] , int n,int i, int key){
    if (i == n){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return first_occurance(arr, n, i+1, key);
}
int last_occurance(int arr[],int n,int i, int key) // give i value equal to zero
{
    if (i == n) // base condition
    {
        return -1;
    }
    int restArray = last_occurance(arr, n, i+1, key);
    if (restArray != -1){
        return restArray;
    }
    if (arr[i] == key){
        return i;
    }
    return -1;
}

int main(){
    int n,i,key;
    cin>>n>>i>>key;
    int arr[n];
    for (int j=0; j<n; j++){
        cin>>arr[j];
    }
    cout<<first_occurance(arr, n, i, key)<<endl;
    cout<<last_occurance(arr, n, i, key)<<endl;
    return 0;
}