#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long long trappingWater(int a[], int n){
        
        int left_max=a[0], right_max=a[n-1];
        int left_a[n], right_a[n];
        for(int i=0;i<n;i++)
        {
            if(a[i]>left_max)
                left_max=a[i];
            left_a[i]=left_max;
            
            if(a[n-1-i]>right_max)
                right_max=a[n-1-i];
            right_a[n-1-i]=right_max;
            
        }
     
        long long water=0;
        for(int k=0;k<n;k++)
            water += min(left_a[k], right_a[k])-a[k];
            
        return water;
    }


int main(){
    int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappingWater(a, 12)<<endl;
    return 0;
}