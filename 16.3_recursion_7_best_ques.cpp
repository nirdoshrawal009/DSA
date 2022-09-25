#include<iostream>
using namespace std;
/*
//reverse a string with recursion
void reverse(string s){
    if (s.length() == 0)
    {
        return ;
    }
    string ros = s.substr(1); // substr(i) function which gives string after i index
    reverse(ros);
    cout<<s[0];

}

int main(){

   reverse("Nirdosh");
   return 0;

}
// replace pi with 3.14

void replacePi(string s){
    if (s.length() == 0) // base condition
    {
        return;
    }
    
    if (s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }

}

int main(){
    replacePi("pipppipppppi");
    return 0;
}
//Tower of hanoi
void towerofHanoi(int n, char src, char dest, char help)
{
   if (n == 0){
    return ;
   }
   towerofHanoi(n-1, src, help, dest); // moving n-1 blocks to heplper block thats why we placed it on destination place
   cout<<"Move from "<<src<<" to "<<dest<<endl; // move remaining 1 block to dest
   towerofHanoi(n-1, help, dest, src); // now helper will acts as src and src as a hepler
}

int main(){
    towerofHanoi(3, 'A', 'C', 'B'); // void function used directely without cout
    return 0;
}

// remove duplicates from a string
string removeDup(string s){
    if (s.length() == 0) 
    {                      // base case
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0]){
        return ans;
    }  
    return (ch+ans);  
}

int main(){
    cout<<removeDup("rawalaa");  // cout is used because function is not void function which we are calling
    return 0;
}

//Move all x alphabet to the last of string
string moveallX(string s){

    if (s.length() == 0){
       return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if(ch == 'x'){
        return (ans+ch);
    }
    return (ch+ans);
}
int main(){
    cout<<moveallX("axxbdxcefxhix");
    return 0;
}
//generate all substrings of a string
void subseq(string s, string ans)
{  
   if (s.length() == 0){
       cout<<ans<<endl;
       return;
   }
   char ch = s[0];
   string ros = s.substr(1);

   subseq(ros, ans);
   subseq(ros, ans + ch);
}
int main(){
    subseq("ABC", "");
    cout<<endl;
    return 0;
}

//generate substrings with ascii character
void subseq(string s, string ans){
       if (s.length() == 0){
           cout<<ans<<endl;
           return ;
       }
       char ch = s[0];
       int code = ch ; // will ascii number of charcter
       string ros = s.substr(1);

       subseq(ros, ans);
       subseq(ros, ans + ch);
       subseq(ros, to_string(code)); // to_string function to convert integer into string
}
int main(){
    subseq("AB", "");
    return 0;
}
*/
// print all possible words from phone digits
string keypadArr[]={"","","abc","def","ghi","jkl", "mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
    if (s.length() == 0){
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0']; // ch is a char to convert it into int we do this ch - '0'
    string ros = s.substr(1);

    for (int i=0; i<code.length(); i++){
         keypad(ros, ans + code[i]);
    }
}
int main(){
    keypad("23","");
    return 0;
}


