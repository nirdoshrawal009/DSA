#include<iostream>
#include<climits>
using namespace std;
// all sub-array
/*
int main(){
    int n;
    cin>>n;

    int a[n];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
  }
    return 0;
}

//maximum sub-array 
int main(){
    int n;
    cin>>n;

    int a[n];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }
  
    int maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
            sum+=a[k];
        }
        maxSum=max(maxSum,sum);
    }
  }
    cout<<maxSum<<endl;
    return 0;
}

// cummulative sum approach with two loops
int main(){

int n;
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int currsum[n+1];
currsum[0]=0;

for(int i=1; i<n; i++){
    currsum[i]=currsum[i-1] + arr[i-1];
}

int maxsum=INT_MIN;
for(int i=1; i<=n; i++){
    int sum=0;
    for(int j=0; j<i; j++){
        sum= currsum[i]-currsum[j];
        maxsum=max(maxsum,sum);
    }
}
cout<<maxsum<<endl;
return 0;
}

//Max subarray using kadanes algorithm
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count_sum=0;
    int maxSum=INT_MIN;

    for(int i=0; i<n; i++){
        count_sum+= a[i];
        if (count_sum<0){
            count_sum = 0;
        }
        maxSum=max(count_sum,maxSum);
            }
        cout<<maxSum<<endl;
        return 0;
}

//Maximum subarray sum of circular array
int kadane(int a[], int n){
    int count_sum=0;
    int maxSum=INT_MIN;

    for(int i=0; i<n; i++){
        count_sum+= a[i];
        if (count_sum<0){
            count_sum = 0;
        }
        maxSum=max(count_sum,maxSum);
            }
        return maxSum;
        }
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int wrap_sum;
    int nonwrap_sum;
    nonwrap_sum=kadane(a,n);
    int total_sum=0;
   
    for(int i= 0; i< n; i++){
        total_sum+= a[i];
        a[i]=-a[i];
    }
    wrap_sum=total_sum + kadane(a,n);

    cout<<max(wrap_sum,nonwrap_sum)<<endl;
    cout<<kadane(a,n);
    return 0;
}
*/
// Pair sum problem if array is sorted 
bool pairsum(int arr[], int n, int k){
     
    int low=0;
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
   
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairsum(arr,8,k);
}