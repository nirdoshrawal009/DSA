#include<iostream>
#include"bits/stdc++.h"
using namespace std;
/*
//operator overloading
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;   
        imag = i;
        }
 
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }
    void print() { 
        cout << real << " + i" << imag << '\n'; 
        }
};

int main(){
    Complex c1(14, 7),c2(12, 5);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
*/
//virtual functions or runtime polymorphism
class base{
    public:
       virtual void print() //virtual function to make derived class function execute
       {
        cout<<"This is the base class print function"<<endl;
       }

       void Display(){
        cout<<"This is the base class Display function"<<endl;
       }
};

class derived: public base{
       public:
       void print(){
        cout<<"This is the derived class print function"<<endl;
       }

       void Display(){
        cout<<"This is the derived class display function"<<endl;
       }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    
    baseptr -> print();

    baseptr -> Display();
    return 0;
}
