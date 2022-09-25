#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(auto &i: a){
        cin>>i;
    }
    // window from i to j a[i...j]

    int zerocnt=0, ans=0, i=0;

    for(int j=0; j<a.size(); j++){
        if(a[j]==0)
            zerocnt++;
        while(zerocnt>k){
            if(a[i]==0){
                zerocnt--;
            }
            i++;
        }
        //zerocnt <= k ensured here
        ans=max(ans,j-i+1);
    }

    cout<<ans<<endl;
    return 0;

}