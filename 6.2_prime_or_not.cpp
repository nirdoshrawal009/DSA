#include<iostream>
#include<math.h>
using namespace std;
/*
//Prime or not by function
bool isPrime(int num){
    for (int i=2; i<sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    
             return true;
        }
}


int main(){
    int a,b;
    cin>>a>>b;

    for (int i=a; i<=b; i++){
        if (isPrime(i)){
            cout<<i<<endl;
        }
    }
}

// fibonacci series
void fib(int n){
    int t1=0;
    int t2=1;
    int NextTerm;

    for(int i=1; i<=n; i++){
        NextTerm=t1+t2;
        cout<<t1<<". ";
        t1=t2;
        t2=NextTerm;

    }

}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}

// Factorial of a number

int factorial(int n){
    
    int fact=1;

    for (int i=2; i<=n; i++){
        fact=fact*i;
    }

    return fact;
}

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
    }
// calculate ncr

int factorial(int n){
    int fact=1;
    for (int i=2; i<=n; i++){
        fact=fact*i;
}
 return fact;
}

int main(){
    int n;
    int r;
    cin>>n;
    cin>>r;
    int ncr=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ncr<<endl;
    return 0;

}
*/
//Pascal triangle
int factorial(int n){
    int fact=1;
    for (int i=2; i<=n; i++){
        fact=fact*i;
}
 return fact;
}

int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
             cout<<factorial(i)/(factorial(i-j)*factorial(j))<<"  ";

            }
           cout<<endl;   
    }
    
   return 0;
}
