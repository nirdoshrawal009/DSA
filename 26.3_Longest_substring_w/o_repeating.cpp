#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> dict(256,-1); //vector who will store position ascii code ranges from 0 to 256
    int maxlen =0, start= -1;

    for(int i=0; i<s.size(); i++){
        if(dict[s[i]]>start){
            start=dict[s[i]];
        }
        dict[s[i]]=i;
        maxlen= max(maxlen, i-start);
        
    }
    cout<<maxlen<<endl;
    return 0;
}
