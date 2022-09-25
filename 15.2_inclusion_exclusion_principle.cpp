#include<iostream>
using namespace std;
// find divisible numbers from 1 to n by a,b
/*
int divisible(int n, int a, int b){
    int n1,n2,n3;
    n1 = n / a;
    n2 = n / b; 
    n3 = n / (a*b);

    return n1 + n2 - n3;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n , a ,b);
    return 0;
}
*/
//Euclid algorithm to find GCD(greatest common diviser) HCF
int gcd(int a, int b){
    int n;
while (b != 0){
    n = a % b;
    a = b;
    b = n;
}
return a;   
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0 ;
}