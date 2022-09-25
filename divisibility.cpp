#include<iostream>
using namespace std;

int main(){
       int n;
       cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both 2 and 3"<<endl;
    
    }
    else if(n%2==0){
        cout<<"Divisible by 2"<<endl;

    }
    else if (n%3==0){
        cout<<"Divisible by 3"<<endl;

    }
    else{
        cout<<"Divisibel by none of them"<<endl;
    }
    return 0;
}