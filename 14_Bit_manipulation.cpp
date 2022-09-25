#include<iostream>
#include<string>
using namespace std;

//get bit
int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
//set bit means put 1 at ith place where we wants to put
int setBit(int n, int pos)
{
    return (n | (1<<pos));
    }
//clearbit
int clearBit(int n, int pos){
    int mask= ~(1<<pos);
    return (n & mask);
}
// Update bit => clear bit + set bit
int updateBit(int n, int pos, int value)
{
        int mask = ~(1<<pos);  
        n=n & mask;
        return (n | (value<<pos));
}
int main(){

    //cout<<getBit(2, 1);
    //cout<<setBit(5, 1);
    //cout<<clearBit(5,0);
    cout<<updateBit(5,3,1);
    
    return 0;
}




