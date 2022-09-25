#include<iostream>
using namespace std;
/*
int main(){
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
        cout<<"*";
        }
        cout<<endl;
    }
     return 0;4
}

int main(){
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row){
               cout<<"*"; 
            }
            else if(j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            
            }
        }
        cout<<endl;
    }

    return 0;

}

int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }  
        cout<<endl; 
    }
    return 0;

} 

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//floyd Triangle
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
         cout<<endl;  
    }
    return 0;
}

 Butterfly pattern
 */
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2;j++){
            if(j<=i || j>n*2-i){
                cout<<"*";
                }
            else{
                cout<<" ";
            }
            
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n*2;j++){
                 if(j<=i || j>n*2-i){
                cout<<"*";
                }
            else{
                cout<<" ";
            }

            }
            cout<<endl;
        }
        return 0;
}






    
