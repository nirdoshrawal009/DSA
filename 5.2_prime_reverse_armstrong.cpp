#include <iostream>
#include<cmath>
#include <math.h>
using namespace std;
/*
//prime or not
int main(){
    int n;
    cin>>n;

    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<n<<" is not prime number";
            break;
        }
        else{
            cout<<n<<" is prime number";
            break;
        }
    }
    return 0;
}
//Reverse number
int main(){
    int n;
    cin>>n;
    int reverse=0;

    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0; 
}
*/
// armstrong or not
int main(){
    int n;
    cin>>n;

    int sum=0;
    int num=n;

    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(sum==num){
        cout<<n<<" Armstrong"<<endl;
    }
    else{
        cout<<n<<" Not armstrong"<<endl;
    }
    return 0; 

}


   