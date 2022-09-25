#include<iostream>
using namespace std;
// sum from 1 to n by recursion
/*
int sum(int n){
    if (n == 0)
    {
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}

// product using recursion n ** p
int product(int n, int p){
    if (p == 0) //Base condition
    { 
        return 1;
    }
    int prev_prod = product(n, p-1);
    return n * prev_prod;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<product(n,p);
    return 0;
}

//Factorial of a number
int fact(int n)
{
    if (n == 0){
        return 1;
    }
   // int prev_fact = fact(n-1);
    return n * fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
*/
// fibonacci number by recursion
int fib(int n)
{
   if (n == 0 || n == 1) // base condition
   { 
      return n;
   }
   return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}