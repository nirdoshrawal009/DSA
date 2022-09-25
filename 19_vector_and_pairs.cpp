#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/*
// vector basic function
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
   // we can iterate through a iterator also

   vector<int>:: iterator it;
   for(it=v.begin(); it != v.end(); it++)
   {
       cout<<*it<<endl;
   }
   // another way of iterate by auto key word

   for(auto element:v)
   {
       cout<<element<<endl;
   }

   v.pop_back(); // will remove last value of vector


   vector<int> v2 (3,50); // will add 3 , 50 50 50 in it

    for(auto element:v2){
        cout<<element<<endl;
    }

    swap(v, v2); // for swaping value between vector
    
    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }
   
    sort(v.begin(), v.end()); // for sorting of vector
     for(auto element:v){
        cout<<element<<endl;
    }
}

// pairs
int main(){
    pair <int, char> p;
    p.first = 4;
    p.second = 'N';
    return 0;
}

//pair problem of giving sorting number to at there places only where they are present
bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}


int main(){
    int arr[] = {10,16,7,14,5,3,12,9};
    vector< pair<int, int> > v;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(), v.end(), myCompare); // second is given index
    for(int j=0; j<v.size(); j++){
        arr[v[j].second]=j;
    }
    
    for(int k=0; k<v.size(); k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
*/

// vector of vectors for storing matrix values
int main(){
    vector<vector<int>>matrix;
    for(int i=0; i<3; i++){
        vector<int>temp;
        for(int j=0; j<3; j++){
            int element;
            cin>>element;
            temp.push_back(element);
        }
        matrix.push_back(temp);
    }

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}