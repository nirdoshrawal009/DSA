#include<iostream>
using namespace std;
/*
int main(){
    int a=10;

    int *aptr=&a;

    cout<<*aptr<<endl; 
    cout<<aptr<<endl;//address value of variable a
    *aptr = 20; //change the value of variable a
    cout<<*aptr<<endl;
    return 0;

}

//Pointer airthmatic
int main(){
    int arr[] = {10,20,30};
    
    cout<<*arr<<endl;//will give only 0th index element

    int *ptr=arr;
    for(int i=0; i<3; i++){
        cout<<*ptr<<endl; // by arr we can do by putting *(arr+i)
        ptr++; // cannot be done using arr++ its not legal
    }

    return 0;
}

//Pointer to pointer
int main(){
    int a=10;

    int *p;
    p=&a;
    
    cout<<*p<<endl; // print value of a

    int **q=&p;

    cout<<*q<<endl; // will print address of variabe a
    cout<<**q<<endl; //will print value of a
    
    return 0;
}

//pointer requirement
void increment(int a){
    a++;
}
int main(){
    int a=2;

    increment(a);
    cout<<a<<endl;// give 2 not 3 thats why we require pointer to solve such problems
    return 0;
}
*/
//Passing pointer to fuinction
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    swap(*aptr,*bptr);// it is call by value and call by refrence can be done by passing address instead of pointers like swap(&a,&b) and this cannot be done by using swap(a,b) because of function defination
    cout<<a<<" "<<b<<endl;
    return 0;
}