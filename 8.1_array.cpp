#include<iostream>
#include<climits>
using namespace std;
/*
int main(){
    int array[4]={10,20,30,40};

    cout<<array[2]<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int array[n];

    for (int i=0; i<=n-1; i++){
        cin>>array[i];
    }

    for (int i=0; i<=n-1; i++){
        cout<<array[i]<<" ";
    }
    return 0;

}

// maximum and minimum number from array with for loop
int main(){
    int n;
    cin>>n;
    int max=INT_MIN;
    int min=INT_MAX;
    int array[n];
    
    for (int i=0; i<=n-1; i++){
        cin>>array[i];
    }

    for (int i=0; i<n; i++){
        if (array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<"Maximum element ="<<max<<endl;
    cout<<"Minimum element ="<<min<<endl;
    return 0;

}
*/
// max and min without loop
int main(){
    int n;
    cin>>n;
    int max_No=INT_MIN;
    int min_No=INT_MAX;
    int array[n];
    
    for (int i=0; i<=n-1; i++){
        cin>>array[i];
    }

    for (int i=0; i<n; i++){
        max_No=max(max_No,array[i]);
        min_No=min(min_No,array[i]);
    }
    cout<<"Maximum element ="<<max_No<<endl;
    cout<<"Minimum element ="<<min_No<<endl;
    return 0;

}