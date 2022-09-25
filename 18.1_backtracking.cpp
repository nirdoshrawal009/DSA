#include<iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n) //int **arr pointer to store the address where we can go or not
{
  if(x < n && y <n && arr[x][y] == 1){
    return true;
  }
  return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int** solArr){
    if (x == (n-1) && (y == (n-1))){
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n)){
        solArr[x][y] = 1; // first we consider that this is the path and taken into step
       if(ratinMaze(arr, x+1, y, n, solArr)){
          return true;
       }
       if(ratinMaze(arr, x, y+1, n, solArr)){
          return true;
       }
       solArr[x][y] = 0; //backtracking
       return false;
}
    return false;
}
int main(){
    int n;
    cin>>n;

    int** arr = new int*[n]; //memory allocate to the array through dynamic array
    for(int i=0; i<n; i++) // memory allocate to 2-D array
    {
        arr[i] = new int[n];
    }

    for (int i=0; i<n; i++) // inputs to the 2-D array
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for(int i =0; i<n; i++){
        solArr[i]= new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }
    if (ratinMaze(arr, 0, 0, n, solArr)){
        for(int i=0; i<n; i++) {
              for(int j=0; j<n; j++)
        {
             cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}