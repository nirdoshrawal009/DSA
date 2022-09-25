#include<iostream>
using namespace std;
/*
//character array
int main(){
    char arr[100]="apple";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}

// inpur in character arrays
int main(){
    char arr[5];
    cin>>arr;

    cout<<arr[3];
}
//check palindrome in characters
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
           check=0;
        }
        else{
            check=1;
        }
    }
     
    if(check==1){
        cout<<"word is palindrome";
    }
    
    else{
        cout<<"word is not palindrome";
    }

    return 0;
}
*/
//Find max length of word and word in sentance
int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0;
    int st=0, maxst=0;
    while(1)
    {   
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen>maxLen)
            {
            maxLen=currLen;
            maxst = st;
            }
        currLen=0; 
        st=i+1;
         }
         else
         {
        currLen++;
        }
        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<arr[i+maxst];
    }
    return 0;
}
