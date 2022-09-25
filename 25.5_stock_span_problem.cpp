#include<bits/stdc++.h>
#include<stack>
using namespace std;

//Brute force approach
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    int ans[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        int count=0;
        for(int j=i; j>=0; j--){
           if(a[i]>=a[j]){
                count++;
            }
            else{
                break;
            }
        }
        ans[i]=count;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/
//Stack approach

vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;

    for(auto price: prices){
        int days=1; 
        while(!s.empty() and s.top().first<=price ){// remeber to use .first while topping element from stack
            days+=s.top().second; //second element days is added of smaller number span
            s.pop();
        }
        s.push({price,days}); // pushing syntax in pair stack
        ans.push_back(days);
    }
    return ans;
}
int main(){

    vector<int>a={100,80,60,70,60,75,85};
    vector<int> res = stockspan(a);
    for(auto i: res){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}

/*
//Stack approach
int main(){
    int n;
	cin>>n;
    int price[n];
	for(int i=0; i<n; i++){
		cin>>price[i];
	}
    stack<pair<int, int>> st;   // Price, span
    
    for(int i=0; i<n; i++){
        int span = 1;
        while(!st.empty() && st.top().first <= price[i]){
            span = span + st.top().second;
            st.pop();
        }
		
        st.push({price[i], span});
        cout<<span<<" ";
    }
    return 0;
}
*/