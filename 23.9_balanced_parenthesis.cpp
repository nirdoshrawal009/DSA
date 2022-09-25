#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s){
    stack<int>st;
    bool ans=true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
    }
    else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
    }
}
   if(!st.empty()){
    return false;
   }

   return ans;
}

int main(){
    string s="{([])}";
    if(isvalid(s)){
        cout<<"It is a balanced parenthesis";
    }
    else{
        cout<<"It is not a balanced parenthesis";
    }
    return 0;
}

