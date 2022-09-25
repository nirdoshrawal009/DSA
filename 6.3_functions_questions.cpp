#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

/*
int sum_natural(int n){
    int sum=0;
    for (int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum_natural(n);
    return 0;
}
//pyythagorean triplet

bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;

    if (a==x){
        b=y;
        c=z;
    }
    else if (a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if (a*a==b*b+c*c){
        return true;
        }
    else{
    return false;
    }

}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    
    if (check(x,y,z)){
        cout<<"Pythagorean numbers";
    }
    else{
        cout<<"Not Pythagorean numbers";    
    }
    return 0;
}

//Binary to decimel conversion
int BinaryToDecimel(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans=y*x+ans;
        x=x*2;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<BinaryToDecimel(n)<<endl;
    return 0;

}

//octal to decimal
int OctalToDecimel(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int y=n%10;
        ans=ans+x*y;
        x=x*8;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<OctalToDecimel(n)<<endl;
    return 0;
}

//hexadecimel to decimel
int HexaToDecimel(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for (int i=s-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
          ans=ans + x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans=ans + x*(n[i]-'A'+10);
        }
        x=x*16;
    }
    return ans;
}
int main(){
    string n;
    cin>>n;
    cout<<HexaToDecimel(n)<<endl;
    return 0;
}

//Decimel to Binary conversion
int DecimalToBinary(int n){
    int x=1;
    int ans=0;
    
    while(x<=n)
        x=x*2;
        x/=2;
    
    while(x>0){
        int lastDigit=n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
      return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
    return 0;

}

//Decimal to octal
int DecimalToOctal(int n){
    int x=1;
    int ans=0;
    
    while(x<=n)
        x=x*8;
        x/=8;
    
    while(x>0){
        int lastDigit=n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
      return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<DecimalToOctal(n)<<endl;
    return 0;
}

//Decimal to hexadecimal
string DecimalToHexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n)
      x*=16;
      x/=16;
    while(x>0){
        int lastDigit=n/x;
        n -=lastDigit*x;
        x /=16;
    if(lastDigit <=9){
       ans = ans + to_string(lastDigit);
     }
     else{
         char c= 'A'+ lastDigit - 10;
         ans.push_back(c);
     }
    }
     return ans;

    
}
int main(){
    int n;
    cin>>n;
    cout<<DecimalToHexadecimal(n)<<endl;
    return 0;
}
*/
// add binary numbers
int reverse(int n){
    int ans=0;
    while(n>0){
        int lastDigit=n%10;
        ans=ans*10 +lastDigit;
        n/=10;
    }
    return ans;
}
int addBinary(int a,int b)
{
    int ans=0;
    int prevcarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10 + prevcarry;
            prevcarry=0;
        }
        else if((a%2==0 && b%2==1 || a%2==1 && b%2==0)){
            if(prevcarry==1){
                ans= ans*10 + 0;
                prevcarry=1;
            }
            else{
                ans=ans*10 + 1;
                prevcarry=0;
            }
        }
            else{
                ans=ans*10 + prevcarry;
                prevcarry=0;
                }
                a/=10;
                b/=10;

            }
            while(a>0){
                if (prevcarry==1){
                    if(a%2==1){
                        ans=ans*10 + 0;
                        prevcarry=1;
                    }
                else{
                    ans=ans*10 + 1;
                    prevcarry=0;
                }

                }
                else{
                ans=ans*10 +(a%2);
                a/=10;
            }
}
            while(b>0){
                if (prevcarry==1){
                    if(b%2==1){
                        ans=ans*10 + 0;
                        prevcarry=1;
                    }
                else{
                    ans=ans*10 + 1;
                    prevcarry=0;
                }
            }
                else
                ans=ans*10 +(b%2);
                b/=10;
            }
}
            if(prevcarry==1){
                ans=ans*10 + 1;
                
                ans=reverse(ans);
                return ans;
            }

                             
                              
int main(){
    int a,b;
    cin>>a>>endl;
    cin>>b>>endl;
    return 0;
}