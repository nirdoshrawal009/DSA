#include <iostream>
#include"bits/stdc++.h"
using namespace std;
//Finding the maximum element till ith place
/*
int main(){

    int n;
    cin>>n;
    int mx=-19999999;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    return 0;
}

//sum of sub-arrays

int main(){
    int n;
    cin>>n;
    int sum=0;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
             sum=sum+arr[j];
             cout<<sum<<" ";
        }
    }
    cout<<sum<<endl;
    return 0;
}

//longest subarray arithmatics

int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    int j=2;

    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}

//record Breaker
int main(){
    int n;
    cin>>n;

    int a[n+1];
        a[n]=-1;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if (n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int mx=-1;
    int ans=0;
    
   for(int i=0; i<n; i++){
       if(a[i]>mx && a[i]>a[i+1]){
           ans++;
       }
       mx=max(a[i],mx);
   }
    cout<<ans<<endl;
    return 0;
}
*/