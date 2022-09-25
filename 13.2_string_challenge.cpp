#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/*
//convert string into upper case and lower case
int main(){
 
    string str="fjskfallkasnflkds";
    
    //cout<<'f'-'F'<<endl;

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <='z'){
            str[i]-=32;
        }
        cout<<str[i];
    }
    cout<<"\n";
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        cout<<str[i];
    }
    string s='sdkjshldkakndlfdka';

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;
    return 0;
}

//function for lower and upper case string
int main()
{
    string s="sdkjshldkakndlfdka";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    cout<<s<<endl;
    return 0;
}

//form the biggest number from numeric string
int main(){
    string s="347973957";

    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}
*/
//print maximum frequency character of a string
int main(){
    string s="lkahdkaakklkdhsaklhd";

    int freq[26];

    for(int i=0; i<26; i++)
    {
        freq[i]=0;
    }

    for(int i=0; i<s.size(); i++)
    {
        freq[s[i]-'a']++;
    }

    char ans='a';
    int max_freq=0;
    
    for(int i=0; i<26; i++)
    {
        if(freq[i]>max_freq){
            max_freq=freq[i];
            ans=i+'a';
        }
    }

    cout<<ans<<" "<<max_freq<<endl;

    return 0;
}