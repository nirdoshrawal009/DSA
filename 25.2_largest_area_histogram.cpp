#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
//Next smallest element code
/*
int main()
{
    // Write your code here.
    vector<int>arr={2,3,1,4,0};
    int n=5;
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    
    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top()>=curr)
        {
            s.pop();           
        }    
        ans[i]=s.top();
        s.push(curr);  
}
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
        return 0;
}


class Solution{ 
    private:
    vector<int> nextSmallerElement(vector<int> arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    
    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top()!= -1 && arr[s.top()]>=curr)
        {
            s.pop();           
        }    
        ans[i]=s.top();
        s.push(i);  
}
        return ans;
}
    vector<int> prevSmallerElement(vector<int> arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    
    for(int i=0; i<n; i++){
        int curr = arr[i];
        while(s.top()!= -1 && arr[s.top()]>=curr)
        {
            s.pop();           
        }    
        ans[i]=s.top();
        s.push(i);  
}
        return ans;
}
    
    
public:
int largestRectangle(vector < int > & heights) {
    int n=heights.size();
    
    vector<int>next(n);
    next=nextSmallerElement(heights,n);
    
    vector<int>prev(n);
    next=prevSmallerElement(heights,n);
    
    int area=INT_MIN;
    for(int i=0; i<n; i++){
        int l=heights[i];
        if(next[i]==-1){
            next[i]=n;
         }
        int b=next[i]-prev[i]-1;
        int newArea=l*b;
        area=max(newArea,area);     
    }
    return area;
 }
};

int main(){
    Solution s;
    vector<int>heights={2,1,6,4,2,3};
    cout<<s.largestRectangle(heights);
}
*/
class Solution {
private:
    vector<int> nextSmallerElement(vector<int> &arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int> &arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
            
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        
        int area = INT_MIN;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};

int main(){
    Solution s;
    vector<int>heights={2,1,6,6,2,3};
    cout<<s.largestRectangleArea(heights);
}