#include<iostream>
using namespace std;
/*
class Student{
    public: //making publically access these variables
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;    
    }
};

int main(){
    Student a;
    a.name = "Nirdosh";
    a.age = 23;
    a.gender = 0;

    a.printInfo();
    return 0;

}

int main(){
    Student arr[3];
    for(int i=0; i<3; i++){
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    
    for (int i=0; i<3; i++){
        arr[i].printInfo();
    }

    return 0;

}
*/

class Student{
    
    string name;
    public: //making publically access these variables
    int age;
    bool gender;
    
    Student (string s,int a, int g) //Parametrised constructor
    {
        cout<<"Parametrized Constructor"<<endl;
        name = s;
        age = a;
        gender = g;

    }

    Student ()
    {
        cout<<"Default Constructor"<<endl;
    }

    Student (Student &a)
    {
        cout<<"Copy Constructor"<<endl;;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    
    ~Student() //Default destructor
    {
        cout<<"Destructor Called"<<endl;
    }

    bool operator == (Student &a)// overload operator
    {
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }


    void getdata(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    void setname(string s){
        name = s;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;    
    }
};
/*
int main(){
    Student arr[3];
    for(int i=0; i<3; i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setname(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    
    for (int i=0; i<3; i++){
        arr[i].printInfo();
    }

    return 0;

}
*/
int main(){
    Student a("Rawal", 23, 0);
    a.printInfo();
    Student b;
    Student c = a;
    
    if (c == b){
        cout<<"Same"<<endl;
    }

    else{
        cout<<"Not same"<<endl;
    }
    c.getdata();
    return 0;
}





