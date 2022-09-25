#include<iostream>
using namespace std;
/*
//print all possible permutations of a string
void permutation(string s, string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return ;
    }
    
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permutation(ros, ans + ch);
        }
}

int main()
{
    permutation("ABC", "");
    return 0;
}

//count the number of way possible from starting point to ending point
int countPath(int s, int e){
    if (s == e){
        return 1;
    }

    if ( s > e){
        return 0;
    }
    int count = 0;
    for (int i=1; i<=min(6,e); i++) // i goes 1 to 6 as we are taking die number in steps
    {
        count = count + countPath(s+i, e);
    }
    return count;
}
int main(){
    cout<<countPath(0,3)<<endl;
    return 0;
}
*/
//count the number of path possible in a maze
int countPathMaze(int n, int i, int j){
    if ( i == n-1 && j == n-1){
        return 1;
    }

    if (i >=n || j >= n){
        return 0;
    }

    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}

int main(){
    cout<<countPathMaze(3,0,0)<<endl;
    return 0;
}