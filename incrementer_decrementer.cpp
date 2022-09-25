#include<iostream>
using namespace std;
/*
int main(){
    int i=1;
    int j=2;
    int k,L;
      //1 //2 //1   //2   //3   //4
    k= i + j + i++ + j++ + ++i + ++j;

      //3   //3   //4  //4
    L=i++ - --i + ++i - i--;

    cout<<i<<" "<<j<<" "<<k<<" "<<L<<endl;

    return 0;
}
*/
int main(){
    int i=10,j=20,k;
      //10  //9  //19  //20  //9   //20   //10 //19    
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;

    return 0;
}