#include<iostream>
using namespace std;
/*
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

//searching a element in 2-D array

int main(){
    int x;
    cin>>x;   
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==x){
                cout<<"Element is found:"<<i+1<<" "<<j+1<<endl;
                flag=true;
            }
        }
    }
    if (flag==false){
        cout<<"Element is not found\n";
    }
    
    return 0;
}
*/
// spiral order matrix Traversal
signed main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

int row_start=0, row_end=n-1, column_start=0, column_end=m-1;

while(row_start <= row_end && column_start <= column_end){
     //for row start
     for(int col=column_start; col<=column_end; col++){
        cout<<a[row_start][col]<<" ";
     }
     row_start++;

    //for column end
    for(int row=row_start; row <= row_end; row++){
        cout<<a[row][column_end]<<" ";
    }
    column_end--;
    
    if(row_start<=row_end){

    // for row end
    for(int col=column_end; col>=column_start; col--){
        cout<<a[row_end][col]<<" ";
    }
     }
    row_end--;
    
    if(column_start<=column_end){
    //for column start
    for(int row=row_end; row>=row_start; row--){
        cout<<a[row][column_start]<<" ";
    }
       }
    column_start++;
}
    return 0;
}