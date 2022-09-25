#include<bits/stdc++.h>
using namespace std;

//Approach : 2 Pointers 

//TC = O(N^2)
//SC = O(M)[for storage for answers]

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<vector<int>> threeSum(vector<int> nums) {
        vector<vector<int>> ans;  
        if(nums.size() < 3) return ans;
            
        sort(nums.begin(), nums.end());        
        for(int i = 0; i < nums.size()-2; i++){            
            if(i == 0 || ( i > 0 && nums[i] != nums[i-1])){                
                int lo = i+1, hi = nums.size()-1, sum = 0 - nums[i]; 
                
                while(lo < hi){                    
                    if(nums[lo] + nums[hi] == sum){
                        ans.push_back({nums[i],nums[lo],nums[hi]});
                        
                        while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                        while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                        
                        lo++;
                        hi--;
                }
                else if(nums[lo] + nums[hi] < sum) lo++;
                else hi--;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr{-1,0,1,2,-1,-4};
    for(auto i: cout<<s.threeSum(arr)){
        cout<<i<<" ";
    }
    return 0;
}

/*
vector<vector<int>> threeSum(vector<int> &arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    set<vector<int>>s; //so that we don't get duplicate values
    int n=arr.size();

    for(int i=0; i<n-2; i++){
        int val=arr[i];
        int l= i+1;
        int r= n-1;

        while(l < r){
            int csum=val + arr[l] + arr[r];
            if(csum==0){
                s.insert({val, arr[l++], arr[r--]});
            }
            if(csum<0){
                l++;
            }
            else{
                r--;
            }
        }
    }
    for(auto x: s){
        ans.push_back(x);
    }
    return ans;
}

*/