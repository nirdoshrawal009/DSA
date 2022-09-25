#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
int main(){
    string str;
    string str1(5, 'N');//if we want a string of 5 charcter
    string str2="NirdoshRawal";
    cout<<str2;
    //cout<<str1;
    //cin>>str;
    //cout<<str;

    return 0;
}

int main(){
    string str;
    getline(cin, str); // with cin it will take character upto spaces so we use getline here
    cout<<str<<endl;

    return 0;
}

//Different different function in string
int main(){
    string str;

    string s1="fam", s2="ily";
    
    //s1.append(s2);
    cout<<s1[2]<<"\n";
    cout<<s1 + s2 <<endl;
    return 0;
}

int main(){
  
    string s3="adjkflk asjdkAD AJGDJKAHF";
    s3.clear();
    cout<<s3<<endl;
    return 0;
    
   string s1="abc";
   string s2="xyz";
   if(s2.compare(s1) == 0){
      cout<<"Strings are equal";
   }
   else{
    cout<<"Strings are not equal"<<endl;
   }
   cout<<s2.compare(s1)<<endl; //s2.empty() for checking string is empty or not
   
  string s1="nincompoop";
  //s1.erase(4,3);
  //cout<<s1.find("oop")<<endl; //will give starting index of the chracter find 
  string s2="lol";
  s1.insert(2,s2); // either we can pass "lol" directly also
  //cout<<s1<<endl;
  //cout<<s1.length();

  for(int i=0; i<s1.length(); i++){
    cout<<s1[i]<<"\n";
  }
 
  string s1="nincompoop";
  string s2=s1.substr(6,4);
  cout<<s2<<endl;
  
 string s1="789";
 int x=stoi(s1); //int to string to_string(x)
 cout<<x+1<<"\n";
  return 0;
}
*/
//sorted string
int main(){
    string s1="sdfkjaldflkbaskdbl";
    sort(s1.begin(),s1.end());
    cout<<s1<<"\n";
    return 0;
}